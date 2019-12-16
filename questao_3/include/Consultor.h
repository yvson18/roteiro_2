#ifndef CONSULTOR_H
#define CONSULTOR_H
#include "Funcionario.h"

class Consultor : public Funcionario
{
    public:
        Consultor(std::string,std::string,double);
        double getSalario();
        double getSalario(float);

    private:
};

#endif // CONSULTOR_H
