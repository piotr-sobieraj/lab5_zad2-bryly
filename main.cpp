#include <iostream>
#include "prostopadloscian.h"
#include "kula.h"
#include "wejscie.h"


int main() {
    Prostopadloscian p1(1, 2, 3);
    std::cout << std::endl << std::endl << p1 << std::endl;
    
    p1.wczytaj_i_zmien_dlugosci_krawedzi(p1);
    std::cout << std::endl << std::endl << p1 << std::endl;

    
    // p1.zmien_dlugosci_krawedzi(2, 3, 5);
    // std::cout << std::endl << std::endl << p1 << std::endl;

    // Kula k1(3);
    // std::cout << std::endl << std::endl << k1;

    // k1.zmian_promien(5);
    // std::cout << std::endl << std::endl << k1 << std::endl;

    // Kula k2(5);
    // std::cout << std::endl << std::endl << k2;

    
}