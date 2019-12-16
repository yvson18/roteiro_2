#include "Quadrado.h"
#include "FiguraGeometrica.h"

Quadrado::Quadrado(std::string n) : FiguraGeometrica(n){}

double Quadrado::CalculaArea(double l){
    return l*l;
}
