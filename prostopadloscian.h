#include <ostream>
#include "bryla.h"


class Prostopadloscian: Bryla{
private:
    double dlugosc;
    double szerokosc;
    double wysokosc;
    void zmien_dlugosci_krawedzi(const double, const double, const double); 

public:
    Prostopadloscian(const double, const double, const double);
    ~Prostopadloscian();

    void ustaw_objetosc() override;
    void ustaw_pole_powierzchni() override;

    void wczytaj_i_zmien_dlugosci_krawedzi(Prostopadloscian&);

    friend std::ostream& operator << (std::ostream&, const Prostopadloscian&);
};