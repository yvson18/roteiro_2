#include <iostream>
#include <string>
#include "Pessoa.h"

using namespace std;

int main()
{
    Pessoa p1 = Pessoa("Tony Stark",Endereco("Ultron00","Nick Fury",
                      50,"Los angeles","California","12344321"),"89876755");
    Pessoa p2 = Pessoa("Steve Rogers",Endereco("Boulevard-123","Brooklyn",
                      56,"New York","New York","12344354"),"4548784");

    cout<<"(Pessoa 1)Nome: "<<p1.getNome()<<endl;
    cout<<"Telefone: "<<p1.getTelefone()<<endl;
    cout<<p1.getEndereco()<<endl;
     cout<<"(Pessoa 2)Nome: "<<p2.getNome()<<endl;
    cout<<"Telefone: "<<p2.getTelefone()<<endl;
    cout<<p2.getEndereco()<<endl;


    return 0;
}
