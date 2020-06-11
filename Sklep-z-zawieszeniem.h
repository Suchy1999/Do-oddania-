#include <iostream>
#pragma once
#include <vector>
#include "Czesc.h"
#include <fstream>
#include <string>
#include "Amortyzator.h"
#include "Sprezyna.h"
using namespace std;

class Sklep
{
private:
    vector <Czesc> zestawCzesci;
    vector <Amortyzator> zestawAmorkow;
    vector <Sprezyna> zestawSprezyn;
    int iloscCzesci;

public:
    Sklep();
    Sklep(int ile);
    ~Sklep();

void dodaj_do_sklepu(Czesc element);
void dodaj_do_sklepuAM(Amortyzator& damper);
void dodaj_do_sklepuSP(Sprezyna& spring);
void podglad();
void podgladAM();
void podgladSP();
void wczytaj();
void dodaj_amorek();
void dodaj_sprezyne();
void wskazAM(int a);
void wskazSP(int b);
void rozmiarAM();
void rozmiarSP();
void koszyk();

};
