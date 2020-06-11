#pragma once
#include <iostream>

#include <string>
#include <fstream>
#include "Czesc.h"
using namespace std;

class Sprezyna: public Czesc
{
    float twardosc;
    int ile;
     public:
        Sprezyna(){}
        Sprezyna(int _lp, string _marka, string _model, string _producent, int _cena,float _twardosc,int _ile);
        void setTwardosc(float _twardosc);
        void setIle(int _ile);
        float getTwardosc() const { return twardosc; }
        int getIle() const {return ile; }
        void wypiszSP() const { Czesc::wypisz(); cout << " Twarodsc sprezyny: "<<twardosc<<" Wartosc obnizenia: "<<ile<< "\n"; }
};

