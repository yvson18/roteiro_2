#include "Triangulo.h"
#include "FiguraGeometrica.h"

Triangulo::Triangulo(std::string n) : FiguraGeometrica(n) {}

double Triangulo::CalculaArea(double b,double h){
    return b*h/2;
}
