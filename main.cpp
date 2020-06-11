#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include "Czesc.h"
#include <string>
#include "Sklep-z-zawieszeniem.h"
#include <fstream>
using namespace std;


int main()
{
cout << "Witaj w sklepie motoryzacyjnym MAMOTO!\n\nWyswietlam zawartosc magazynu \n------------------------------"<<endl;
Sklep shop(0);
shop.dodaj_amorek();
shop.dodaj_sprezyne();
shop.podgladAM();
shop.podgladSP();
shop.koszyk(suma);

}
