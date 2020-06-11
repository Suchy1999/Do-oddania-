#pragma once
#include <iostream>

#include <string>
#include <fstream>
#include "Czesc.h"
using namespace std;

class Amortyzator: public Czesc
{
    string rodzaj;
    string typ;
     public:
        Amortyzator(){}
        Amortyzator(int _lp, string _marka, string _model, string _producent, int _cena,string _rodzaj,string _typ);
        void setRodzaj(string _rodzaj);
        void setTyp(string _typ);
        string getRodzaj() const { return rodzaj; }
        string getTyp() const {return typ; }
        void wypiszAM() const { Czesc::wypisz(); cout << " Rodzaj: "<<rodzaj<<" Typ: "<<typ<< "\n"; }
};

