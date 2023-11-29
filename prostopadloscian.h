#include <ostream>
#include "bryla.h"


class Prostopadloscian: Bryla{
    double dlugosc;
    double szerokosc;
    double wysokosc;

    public:
    Prostopadloscian(const double, const double, const double);
    ~Prostopadloscian();

    void ustaw_objetosc() override;
    void ustaw_pole_powierzchni() override;

    void zmien_dlugosci_krawedzi(const double, const double, const double); 


    friend std::ostream& operator << (std::ostream&, const Prostopadloscian&);
};