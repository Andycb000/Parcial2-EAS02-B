#ifndef figura_h
#define figura_h

class Figura{
private:
    int b, h;
    float p;

public:
    Figura();
    Figura(int b, int h);
    void setPerimetro(float a);
    float getPerimetro();
};


#endif