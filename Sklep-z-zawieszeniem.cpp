#include <iostream>
#include "Sklep-z-zawieszeniem.h"
#include <fstream>
#include <cstdlib>
#include <vector>
#include <string>
#include <sstream>
using namespace std;

Sklep::Sklep(){
    iloscCzesci= 0;
}
Sklep::Sklep(int ile)
{
    iloscCzesci=ile;
    zestawCzesci.resize(ile);
}
Sklep::~Sklep()
{
	zestawCzesci.clear();
}
void Sklep::dodaj_do_sklepu(Czesc element)
{
    zestawCzesci.push_back(element);
}
void Sklep::dodaj_do_sklepuAM(Amortyzator& damper)
{
    zestawAmorkow.push_back(damper);
}
void Sklep::dodaj_do_sklepuSP(Sprezyna& spring)
{
    zestawSprezyn.push_back(spring);
}
void Sklep::podglad()
{
    cout << "\nWyswietlam wszystkie elementy listy:"<<endl;
    for(auto& gaz : zestawCzesci)
	{
		gaz.wypisz();
	}

}
void Sklep::podgladAM()
{
    cout << "\nWyswietlam wszystkie amortyzatory: "<<endl;
    for(auto& gaz : zestawAmorkow)
	{
		gaz.wypiszAM();
	}

}
void Sklep::podgladSP()
{
    cout << "\nWyswietlam wszystkie sprezyny:"<<endl;
    for(auto& gaz : zestawSprezyn)
	{
		gaz.wypiszSP();
	}

}
void Sklep::wczytaj()
{

    fstream plik;
    plik.open("magazyn.txt", ios::in);
    if(plik.good()==false)
    {
        cout<<"Nie mozna otworzyc pliku!";
        exit(0);
    }

    Sklep magazyn;
    string tekst;
    string ma,mo,pr;
    int lp,ce;
    while(getline(plik,tekst)){
    stringstream tekstStream(tekst);
    tekstStream>>lp;
    tekstStream>>ma;
    tekstStream>>mo;
    tekstStream>>pr;
    tekstStream>>ce;
    Czesc element(lp,ma,mo,pr,ce);
    magazyn.dodaj_do_sklepu(element);
    }
    plik.close();
     magazyn.podglad();
}
void Sklep::dodaj_amorek()
{

    fstream plik;
    plik.open("amortyzatory.txt", ios::in);
    if(plik.good()==false)
    {
        cout<<"Nie mozna otworzyc pliku!";
        exit(0);
    }


    string tekst;
    string ma,mo,pr,ro,ty;
    int lp,ce;
while(getline(plik,tekst)){
    stringstream tekstStream(tekst);
    tekstStream>>lp;
    tekstStream>>ma;
    tekstStream>>mo;
    tekstStream>>pr;
    tekstStream>>ce;
    tekstStream>>ro;
    tekstStream>>ty;

  Amortyzator damper(lp,ma,mo,pr,ce,ro,ty);
   zestawAmorkow.push_back(damper);
    }
    plik.close();
}

void Sklep::dodaj_sprezyne()
{

    fstream plik;
    plik.open("sprezyny.txt", ios::in);
    if(plik.good()==false)
    {
        cout<<"Nie mozna otworzyc pliku!";
        exit(0);
    }

    //Sklep sprezyny;
    string tekst;
    string ma,mo,pr;
    float tw;
    int lp,ce,ile;
while(getline(plik,tekst)){
    stringstream tekstStream(tekst);
    tekstStream>>lp;
    tekstStream>>ma;
    tekstStream>>mo;
    tekstStream>>pr;
    tekstStream>>ce;
    tekstStream>>tw;
    tekstStream>>ile;

    Sprezyna spring(lp,ma,mo,pr,ce,tw,ile);
    zestawSprezyn.push_back(spring);
    }
    plik.close();

}

void Sklep::wskazAM(int a)
{
    auto iter=zestawAmorkow.at(a-1);
    iter.wypiszAM();

}
void Sklep::wskazSP(int b)
{
    auto iter=zestawSprezyn.at(b-1);
    iter.wypiszSP();

}
void Sklep::rozmiarAM()
{
    int ile=zestawAmorkow.size();
    cout<<"W sklepie znaduja sie amortyzatory do "<< ile <<" aut"<<endl;
}
void Sklep::rozmiarSP()
{
    int ile=zestawSprezyn.size();
    cout<< "W sklepie znaduja sie sprezyny do "<< ile <<" aut"<<endl;
}
void Sklep::koszyk()
{

    vector <Amortyzator> zestawAmorkowKOSZYK;
    vector <Sprezyna> zestawSprezynKOSZYK;
    int ile1=zestawAmorkow.size();
    int ile2=zestawSprezyn.size();
    int wybor1,wybor2,wybor3,wybor4;
    cout << "Czy chcesz kupic amortyzator?"<<endl;
    cout<<"1.Tak  2.Nie"<<endl;
    do
{

    cin >> wybor1;
    if (wybor1==1)
    {
        cout << "Ktory?"<<endl;
        cin>> wybor2;
        if (wybor2<=ile1)
        {

            zestawAmorkowKOSZYK.push_back(zestawAmorkow.at(wybor2-1));
            cout<<"Czy chcesz dodac kolejny amortyzator do koszyka?"<<endl;
            cout<<"1.Tak    2.Nie"<<endl;

        }
        else
        {
            cout<<"Nie ma takiego na liscie\nCzy chcesz kupic amortyzator?\n1.Tak   2.Nie"<<endl;
        }
  }

    else
    {



    }

}
while(wybor1!=2);

    cout << "Czy chcesz kupic sprezyne?"<<endl;
    cout<<"1.Tak  2.Nie"<<endl;
    do
{

    cin >> wybor3;
    if (wybor3==1)
    {
        int wybor4;
        cout << "Ktora?"<<endl;
        cin>> wybor4;
        if (wybor4<=ile2)
        {


            zestawSprezynKOSZYK.push_back(zestawSprezyn.at(wybor4-1));
            cout<<"Czy chcesz dodac kolejna sprezyne do koszyka?"<<endl;
            cout<<"1.Tak    2.Nie"<<endl;

            int cena=0;
            for(auto ce:zestawSprezynKOSZYK){
            cena+=ce.getCena();

            }
        }
        else
        {
            cout<<"Nie ma takiej na liscie\nCzy chcesz kupic sprezyne?\n1.Tak   2.Nie"<<endl;
        }
  }

    else
    {
        cout<<"Twoj koszyk\nAmortyzatory:"<<endl;
        for(auto& gaz : zestawAmorkowKOSZYK)
	{
		gaz.wypiszAM();
	}
        cout<<"\nSprezyny:"<<endl;
        for(auto& gaz : zestawSprezynKOSZYK)
	{
		gaz.wypiszSP();
	}
        int cena1=0;
        for(auto ce1:zestawAmorkowKOSZYK)
        {
            cena1+=ce1.getCena();
        }
        int cena2=0;
        for(auto ce2:zestawSprezynKOSZYK)
        {
            cena2+=ce2.getCena();
        }
        int suma=cena1+cena2;
        cout<<"\n\nCena do zaplaty: "<<suma<<endl;
    }
}
while(wybor3!=2);


}



