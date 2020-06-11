#pragma once
#include <iostream>
using namespace std;
#include <string>
#include <fstream>

class Czesc {
    protected:
        int lp;
        string marka;
        string model;
        string producent;
        int cena;
    public:
        Czesc(){}
        Czesc(int _lp, string _marka, string _model, string _producent, int _cena);
        void setLp(int _lp);
        void setMarka(string _marka);
        void setModel(string _model);
        void setProducent(string _producent);
        void setCena(int _cena);
        int getLp() const {return lp;}
        string getMarka() const { return marka; }
        string getModel() const {return model; }
        string getProducent() const { return producent; }
        int getCena() const { return cena; }
        void wypisz() const { cout <<lp <<".Marka: "<< marka <<" Model: "<< model <<" Producent: "<<producent <<" Cena: "<< cena ; }
    };
