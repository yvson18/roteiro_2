#include "FiguraGeometrica.h"

FiguraGeometrica::FiguraGeometrica(std::string nome)
{
   this->nome = nome;
}
double FiguraGeometrica::CalculaArea(){/*Nao tem sentido pq n se tem dados para calcular
de maneira generica qualquer area*/}

std::string FiguraGeometrica::getNome(){
    return nome;
}
