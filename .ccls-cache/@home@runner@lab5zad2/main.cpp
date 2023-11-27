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
    double dlugosc;
    double szerokosc;
    double wysokosc;

    public:
        Prostopadloscian(const int a, const int b, const int c) : dlugosc(a), szerokosc(b), wysokosc(c){
            ustaw_objetosc();
            ustaw_pole_powierzchni();
        }
        void ustaw_objetosc() override {
            objetosc = dlugosc * wysokosc * szerokosc;            
        }

        void ustaw_pole_powierzchni() override{
            pole_powierzchni = 2 * (dlugosc*szerokosc + dlugosc*wysokosc + szerokosc*wysokosc);
        }


        friend std::ostream& operator << (std::ostream& wyjscie, const Prostopadloscian p){
            wyjscie << "x = " << p.dlugosc << ", y = " << p.szerokosc << ", z = " << p.wysokosc << ", pole pow. = " << p.pole_powierzchni << ", obj. = " << p.objetosc;
            return wyjscie;
        }
        
};

int main() {
    Prostopadloscian p1(1, 2, 3);
    std::cout << p1;
}