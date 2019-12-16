#ifndef PESSOA_H
#define PESSOA_H
#include <string>
#include "Endereco.h"

class Pessoa
{
    public:
        Pessoa();
        Pessoa(std::string n);
        Pessoa(std::string n,Endereco eND,std::string tel);
        void setNome(std::string nom);
        void setTelefone(std::string te);
        void setEndereco(Endereco en);
        std::string getNome();
        std::string getTelefone();
        std::string getEndereco();


    private:
        std::string nome,telefone;
        Endereco endereco;
};

#endif // PESSOA_H
