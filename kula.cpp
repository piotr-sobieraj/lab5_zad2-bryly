#include <cmath>
#include "kula.h"
#include "wprowadzanie_danych.h"

Kula::Kula(const double r): promien(r){

    std::cout << std::endl << __func__ << " (promień " << promien << ") się zgłasza";
    
    if(promien < 0)
        throw std::invalid_argument("Promień musi być liczbą dodatnią!");
    
    ustaw_objetosc();
    ustaw_pole_powierzchni();    
}

Kula::~Kula(){
    std::cout << std::endl << __func__ << " (promien " << promien << ") się zgłasza";
}


void Kula::zmien_promien(const double nowy_promien){
    promien = nowy_promien;

    ustaw_objetosc();
    ustaw_pole_powierzchni();
}


void Kula::wczytaj_i_zmien_dlugosc_promienia(){
    double promien;

    do{
        std::cout << "\nPodaj nowy promień: ";
    }while (!wczytaj_dodatnia_double(promien));

    zmien_promien(promien);    
}


void Kula::ustaw_objetosc(){
    objetosc =  4. / 3.  *   M_PI * promien * promien * promien;
}

void Kula::ustaw_pole_powierzchni(){
    pole_powierzchni =  4.* M_PI * promien * promien;
}

std::ostream& operator << (std::ostream& wyjscie, const Kula& k){

    wyjscie << "Kula(" << k.promien << ", pole pow. = " << k.pole_powierzchni << ", obj. = " << k.objetosc << ")";
    
    return wyjscie;
}



