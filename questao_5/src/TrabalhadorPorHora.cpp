#include "TrabalhadorPorHora.h"
#include "Trabalhador.h"

TrabalhadorPorHora::TrabalhadorPorHora(std::string nom,double valh):Trabalhador(nom,0){
    valorDaHora = valh;
}

double TrabalhadorPorHora::CalculaPagamentoSemanal(int hS){

        if(hS <= 40){
             setSalario(4*hS * valorDaHora);
        }else if (hS > 40){
             setSalario(4*((40 * valorDaHora) + (((hS - 40)*1.5)*valorDaHora)));
        }

    return getSalario()/4;
}


