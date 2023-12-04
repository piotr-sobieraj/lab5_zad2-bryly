#include "bryla.h"

class Kula : Bryla{
private: 
    double promien;

    void ustaw_objetosc();
    void ustaw_pole_powierzchni();
    void zmien_promien(const double);

public:
    Kula(const double); 
    ~Kula();

    void wczytaj_i_zmien_dlugosc_promienia();

    friend std::ostream& operator << (std::ostream&, const Kula&);
};