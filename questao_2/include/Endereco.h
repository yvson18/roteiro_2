#ifndef ENDERECO_H
#define ENDERECO_H
#include <string>


class Endereco
{
    public:
    Endereco();
    Endereco(std::string r, std::string b, int n,
               std::string cI, std::string e, std::string cE);
    std::string toString();

    private:
    std::string rua,bairro,cidade,estado,cep;
    int num;


};

#endif // ENDERECO_H
