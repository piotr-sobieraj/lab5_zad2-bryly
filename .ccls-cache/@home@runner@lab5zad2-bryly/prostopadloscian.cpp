#include "prostopadloscian.h"

Prostopadloscian::Prostopadloscian(const double a, const double b, const double c) : dlugosc(a), szerokosc(b), wysokosc(c){

    if(a < 0 || b < 0 || c < 0)
        throw std::invalid_argument("Długości muszą być liczbami dodatnimi!");
    
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

