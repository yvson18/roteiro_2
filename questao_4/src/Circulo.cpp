#include "Circulo.h"
#include "FiguraGeometrica.h"

Circulo::Circulo(std::string n) : FiguraGeometrica(n){}

double Circulo::CalculaArea(double r){
    return 3.14*r*r;
}


