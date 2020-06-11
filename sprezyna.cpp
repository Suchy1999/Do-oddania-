#include <iostream>
#include "Sprezyna.h"
#include <string>
#include <fstream>


Sprezyna::Sprezyna(int _lp, string _marka, string _model, string _producent, int _cena,float _twardosc,int _ile) {
    setLp(_lp);
    setMarka(_marka);
    setModel(_model);
    setProducent (_producent);
    setCena (_cena);
    setTwardosc (_twardosc);
    setIle (_ile);
}

void Sprezyna::setTwardosc(float _twardosc) {

        twardosc=_twardosc;

}

void Sprezyna::setIle (int _ile) {

        ile=_ile;

}
