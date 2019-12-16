#include "Trabalhador.h"

Trabalhador::Trabalhador(std::string n,double s)
{
    nome = n;
    salario = s;
}

double Trabalhador::CalculaPagamentoSemanal(){return salario/4;}

void Trabalhador::setSalario(double sal){
    salario = sal;
}

double Trabalhador::getSalario(){
    return salario;
}



