#include <iostream>

class Bryla{
protected:
    double pole_powierzchni;
    double objetosc;    
public:
    // virtual ~Bryla();
    virtual void ustaw_objetosc() = 0;    
    virtual void ustaw_pole_powierzchni() = 0;
};

class Prostopadloscian: public Bryla{
    double x;
    double y;
    double z;

    public:
        Prostopadloscian(const int a, const int b, const int c) : x(a), y(b), z(c){
            ustaw_objetosc();
            ustaw_pole_powierzchni();
        }
        void ustaw_objetosc() override {
            objetosc = x * y * z;            
        }

        void ustaw_pole_powierzchni() override{
            pole_powierzchni = 2 * (x*y + x*z + y*z);
        }


        friend std::ostream& operator << (std::ostream& wyjscie, const Prostopadloscian p){
            wyjscie << "x " << p.x << ", y " << p.y << ", z " << p.z << ", pole pow. " << p.pole_powierzchni << ", obj. " << p.objetosc;
            return wyjscie;
        }
        
};

int main() {
    Prostopadloscian p1(1, 2, 3);
    std::cout << p1;
}