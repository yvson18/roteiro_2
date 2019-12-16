#ifndef TRIANGULO_H
#define TRIANGULO_H
#include "FiguraGeometrica.h"

class Triangulo : public FiguraGeometrica
{
    public:
        Triangulo(std::string n);
        double CalculaArea(double,double);
    private:
};

#endif // TRIANGULO_H
