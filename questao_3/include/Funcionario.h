#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H
#include <string>

class Funcionario
{
    public:
        Funcionario(std::string,std::string,double);
        void setMatricula(std::string);
        void setNome(std::string);
        void setSalario(double);
        std::string getMatricula();
        std::string getNome();
        double getSalario();

    protected:

        std::string matricula,nome;
        double salario;

};

#endif // FUNCIONARIO_H
