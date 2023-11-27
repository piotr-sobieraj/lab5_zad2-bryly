#include "prostopadloscian.h"

Prostopadloscian::Prostopadloscian(const int a, const int b, const int c) : dlugosc(a), szerokosc(b), wysokosc(c){
    ustaw_objetosc();
    ustaw_pole_powierzchni();
}

void Prostopadloscian::ustaw_objetosc() {
    objetosc = dlugosc * wysokosc * szerokosc;            
}

void Prostopadloscian::ustaw_pole_powierzchni() {
    pole_powierzchni = 2 * (dlugosc*szerokosc + dlugosc*wysokosc + szerokosc*wysokosc);
}


std::ostream& operator << (std::ostream& wyjscie, const Prostopadloscian p){
    wyjscie << "x = " << p.dlugosc << ", y = " << p.szerokosc << ", z = " << p.wysokosc << ", pole pow. = " << p.pole_powierzchni << ", obj. = " << p.objetosc;
    return wyjscie;
}

