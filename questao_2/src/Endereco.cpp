#include "Endereco.h"
#include <iostream>
#include <sstream>

Endereco::Endereco(){}

Endereco::Endereco(std::string r, std::string b, int n,
                   std::string cI, std::string e, std::string cE){
    rua = r;
    bairro = b;
    num = n;
    cidade = cI;
    estado = e;
    cep = cE;
}

std::string Endereco::toString(){

    std::stringstream convertnum;
    convertnum << num;

    return "Numero: " + convertnum.str() + "\n" + "Rua: " + rua + "\n" + "Bairro: " + bairro + "\n" + "Cidade: " + cidade
    + "\n" + "Estado: " + estado + "\n" + "Cep: " + cep + "\n";

}

