#include <iostream>
#include "prostopadloscian.h"
#include "kula.h"
#include "wprowadzanie_danych.h"


int main() {
    std::cout << "Program demonstruje hierarchię klas, która modeluje następujące relacje: Prostopadłościan jest Bryłą, Kula jest Bryłą.";
    
    std::cout << "\nTworzę kulę o promieniu 5 oraz prostopadłościan o bokach długości 3, 4, 5, po czym wyświetlam nowo stworzone obiekty.\n";
    std::cout << "W trakcie działania programu zgłaszają się konstruktory i destruktory odpowiednich klas.\n";

    
    Kula k1(5.);
    Prostopadloscian p1(3, 4, 5);

    std::cout << std::endl;
    std::cout << std::endl << k1;
    std::cout << std::endl << p1;

    std::cout << "\n\nPrzechodzę do interaktywnej części programu, w której masz możliwość zmienić długość promienia oraz wymiary prostopadłościanu. Po zmianie wyświetlam zmodyfikowane obiekty.\n";

    k1.wczytaj_i_zmien_dlugosc_promienia();
    std::cout << std::endl  << k1;

    std::cout << "\n\nTeraz prostopadłościan\n";
    p1.wczytaj_i_zmien_dlugosci_krawedzi();
    std::cout << std::endl << std::endl << p1 << std::endl;

    getchar();

    return 0;    
}