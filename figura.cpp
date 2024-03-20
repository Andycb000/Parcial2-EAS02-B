#include "figura.h"
#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

Figura::Figura()
{
    b=0;
    h=0;
    p=0;
}

Figura::Figura(int b, int h)
{
    this->b=b;
    this->h=h;
}

Figura::Figura(int h)
{
    this->h=h;
}

void Figura::setPerimetro(float a)
{
    this->p=a;
}

float Figura::getPerimetro()
{
    return p;
}