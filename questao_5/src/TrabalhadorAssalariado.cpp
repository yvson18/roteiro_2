#include "TrabalhadorAssalariado.h"
#include "Trabalhador.h"

TrabalhadorAssalariado::TrabalhadorAssalariado(std::string n,double sal):Trabalhador(n,sal){}

double TrabalhadorAssalariado::CalculaPagamentoSemanal(){
    return getSalario()/4;
}

