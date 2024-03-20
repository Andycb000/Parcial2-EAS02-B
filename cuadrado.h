#ifndef cuadrado_h
#define cuadrado_h
#include "figura.h"

class Cuadrado:public Figura
{
    public:
    Cuadrado(int h):Figura(h){
        int a= 4*h;
        setPerimetro(a);
    };

};

#endif