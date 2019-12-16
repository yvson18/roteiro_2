#include "Consultor.h"
#include "Funcionario.h"

double Consultor::getSalario(){
    return salario*1.1;
}

double Consultor::getSalario(float percentual){
    return salario*(1+(percentual/100));
}

Consultor::Consultor(std::string m, std::string n ,double s):Funcionario(m,n,s){}
