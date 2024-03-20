#ifndef circulo_h
#define circulo_h
#include "figura.h"

class Circulo:public Figura
{
    public:
    Circulo(int h):Figura(h)
    {
        int a= 3.14*2*h;
        setPerimetro(a);
    };

};



#endif