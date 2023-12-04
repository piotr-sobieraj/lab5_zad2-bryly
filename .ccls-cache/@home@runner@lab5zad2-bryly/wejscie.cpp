#include "wejscie.h"

//Sprawdza, czy podany ciąg znaków został poprawnie przekonwertowany na double; przekonwertowana wartość przekazywana jest przez drugi parametr
bool czy_poprawna_double(const std::string& wejscie, double &wynik) {
    try {
        wynik = std::stod(wejscie);
        return true;
    } catch(const std::invalid_argument &e) {
        return false;
    } catch(const std::out_of_range &e) {
        return false;
    }
}

bool wczytaj_dodatnia_double(double &double_liczba){
    std::string str_liczba;
    std::cin >> str_liczba;

    if(czy_poprawna_double(str_liczba, double_liczba)){
        if (double_liczba > 0) 
            return true;
        else{
            std::cout << "Należy podać liczbę dodatnią.";
            return false;
        }
    }
    else{
        std::cout << str_liczba << " nie jest poprawną liczbą typu double.";
        return false;
    }
}