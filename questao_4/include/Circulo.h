#ifndef CIRCULO_H
#define CIRCULO_H
#include "FiguraGeometrica.h"

class Circulo : public FiguraGeometrica
{
    public:
        Circulo(std::string n);
        double CalculaArea(double);
    private:
};

#endif // CIRCULO_H
