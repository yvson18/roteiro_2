#ifndef TRABALHADORASSALARIADO_H
#define TRABALHADORASSALARIADO_H
#include "Trabalhador.h"

class TrabalhadorAssalariado : public Trabalhador
{
    public:
        TrabalhadorAssalariado(std::string n,double sal);
        double CalculaPagamentoSemanal();


    private:
};

#endif // TRABALHADORASSALARIADO_H
