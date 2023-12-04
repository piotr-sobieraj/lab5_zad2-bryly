#pragma once

#include <iostream>

class Bryla{
protected:
    double pole_powierzchni;
    double objetosc;    

public:
    virtual ~Bryla(){
        std::cout << std::endl << __func__ << " (pole pow. " << pole_powierzchni << ", obj. " << objetosc << ") się zgłasza";
    }
    
    virtual void ustaw_objetosc() = 0;    
    virtual void ustaw_pole_powierzchni() = 0;
};