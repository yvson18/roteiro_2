#include "Funcionario.h"

Funcionario::Funcionario(std::string matr,std::string nom,double sal)
{
    setMatricula(matr);
    setNome(nom);
    setSalario(sal);
}
void Funcionario::setMatricula(std::string matr){
    matricula = matr;
}
void Funcionario::setNome(std::string nom){
    nome = nom;
}
void Funcionario::setSalario(double sal){
    salario = sal;
}
std::string Funcionario::getMatricula(){
    return matricula;
}
std::string Funcionario::getNome(){
    return nome;
}
double Funcionario::getSalario(){
    return salario;
}
