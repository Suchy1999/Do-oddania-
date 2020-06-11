#include <iostream>
using namespace std;
#include "Czesc.h"
#include <string>
#include <fstream>

Czesc::Czesc(int _lp, string _marka, string _model, string _producent, int _cena) {
    setLp(_lp);
    setMarka(_marka);
    setModel(_model);
    setProducent (_producent);
    setCena (_cena);
}

void Czesc::setLp(int _lp)
{
        lp = _lp;
}

void Czesc::setMarka(string _marka) {

        marka = _marka;

}

void Czesc::setModel(string _model) {

        model=_model;

}

void Czesc::setProducent(string _producent) {

        producent=_producent;
}

void Czesc::setCena(int _cena) {

        cena= _cena;

}
