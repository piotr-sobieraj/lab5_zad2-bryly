#include "prostopadloscian.h"

Prostopadloscian::Prostopadloscian(const double a, const double b, const double c) : dlugosc(a), szerokosc(b), wysokosc(c){

    std::cout << std::endl << __func__ << " (wymiary " << dlugosc << ", " << szerokosc << ", " << wysokosc << ") się zgłasza";
    
    if(dlugosc < 0 || szerokosc < 0 || wysokosc < 0)
        throw std::invalid_argument("Długości muszą być liczbami dodatnimi!");
    
    ustaw_objetosc();
    ustaw_pole_powierzchni();
}

Prostopadloscian::~Prostopadloscian(){
    std::cout << std::endl << __func__ << " (wymiary " << dlugosc << ", " << szerokosc << ", " << wysokosc << ") się zgłasza";
}


void Prostopadloscian::ustaw_objetosc() {
    objetosc = dlugosc * wysokosc * szerokosc;            
}

void Prostopadloscian::ustaw_pole_powierzchni() {
    pole_powierzchni = 2 * (dlugosc*szerokosc + dlugosc*wysokosc + szerokosc*wysokosc);
}


void Prostopadloscian::zmien_dlugosci_krawedzi(
                            const double nowa_dlugosc, 
                            const double nowa_szerokosc,
                            const double nowa_wysokosc){
    dlugosc = nowa_dlugosc;
    szerokosc = nowa_szerokosc;
    wysokosc = nowa_wysokosc;

    ustaw_objetosc();
    ustaw_pole_powierzchni();
}


std::ostream& operator << (std::ostream& wyjscie, const Prostopadloscian& p){
    wyjscie << "Prostopadłościan(" << p.dlugosc << ", " << p.szerokosc << ", " << p.wysokosc << ", pole pow. = " << p.pole_powierzchni << ", obj. = " << p.objetosc << ")";
    return wyjscie;
}