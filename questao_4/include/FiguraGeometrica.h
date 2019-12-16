#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H
#include <string>

class FiguraGeometrica
{
    public:
        FiguraGeometrica(std::string nome);
        double CalculaArea();
        std::string getNome();

    private:
        std::string nome;
};

#endif // FIGURAGEOMETRICA_H
