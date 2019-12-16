#ifndef TRABALHADORPORHORA_H
#define TRABALHADORPORHORA_H
#include "Trabalhador.h"

class TrabalhadorPorHora : public Trabalhador
{
    public:
        TrabalhadorPorHora(std::string nome,double valorDaHora);
        double CalculaPagamentoSemanal(int hS);

    private:
        double valorDaHora;

};

#endif // TRABALHADORPORHORA_H
