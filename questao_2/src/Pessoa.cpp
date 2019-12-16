#include <iostream>
#include "Pessoa.h"


void Pessoa::setNome(std::string nom){
    nome = nom;
}
void Pessoa::setTelefone(std::string te){
    telefone = te;
}
void Pessoa::setEndereco(Endereco en){
    endereco = en;
}
std::string Pessoa::getNome(){
    return nome;
}
std::string Pessoa:: getTelefone(){
    return telefone;
}
std::string Pessoa::getEndereco(){
    return endereco.toString();
}

Pessoa::Pessoa(std::string n){
    nome = n;
}

Pessoa::Pessoa(std::string n,Endereco eND,std::string tel){
    nome = n;
    endereco = eND;
    telefone = tel;
}


