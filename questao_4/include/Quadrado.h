#ifndef QUADRADO_H
#define QUADRADO_H
#include "FiguraGeometrica.h"

class Quadrado : public FiguraGeometrica
{
    public:
        Quadrado(std::string n);
        double CalculaArea(double);
    private:
};

#endif // QUADRADO_H
