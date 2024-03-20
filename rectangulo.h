#ifndef rectangulo_h
#define rectangulo_h
#include "figura.h"

class Rectangulo:public Figura
{
    public:
    Rectangulo(int b, int h):Figura(b,h)
    {
        int a= 2*b + 2*h;
        setPerimetro(a);
    };

};


#endif