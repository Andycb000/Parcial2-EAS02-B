#ifndef cuadrado_h
#define cuadrado_h
#include "figura.h"

class Cuadrado:public Figura
{
    public:
    Cuadrado(int b, int h):Figura(b, h){
        int a= 2*b + 2*h;
        setPerimetro(a);
    };

};

#endif