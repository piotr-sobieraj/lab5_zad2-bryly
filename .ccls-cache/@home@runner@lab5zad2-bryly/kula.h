#include "bryla.h"

class Kula : Bryla{
    private: 
    double promien;

    void ustaw_objetosc();
    void ustaw_pole_powierzchni();

    public:
    Kula(const double); 
    ~Kula();

    friend std::ostream& operator << (std::ostream&, const Kula&);
};