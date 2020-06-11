#include <iostream>

#include "Amortyzator.h"
#include <string>
#include <fstream>


Amortyzator::Amortyzator(int _lp, string _marka, string _model, string _producent, int _cena,string _rodzaj,string _typ) {
    setLp(_lp);
    setMarka(_marka);
    setModel(_model);
    setProducent (_producent);
    setCena (_cena);
    setRodzaj (_rodzaj);
    setTyp (_typ);
}

void Amortyzator::setRodzaj(string _rodzaj) {

        rodzaj = _rodzaj;

}
void Amortyzator::setTyp(string _typ) {

        typ = _typ;

}

