#include <ostream>
#include "bryla.h"


class Prostopadloscian: public Bryla{
    double dlugosc;
    double szerokosc;
    double wysokosc;

    public:
        Prostopadloscian(const int, const int, const int);
 
        void ustaw_objetosc() override;
        void ustaw_pole_powierzchni() override;

        friend std::ostream& operator << (std::ostream&, const Prostopadloscian);
};