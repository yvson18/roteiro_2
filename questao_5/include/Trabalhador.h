#ifndef TRABALHADOR_H
#define TRABALHADOR_H
#include <string>

class Trabalhador
{
    public:

        Trabalhador(std::string n,double s);
        double CalculaPagamentoSemanal();
        void setSalario(double sal);
        double getSalario();

    private:
        std::string nome;
        double salario;
};

#endif // TRABALHADOR_H
