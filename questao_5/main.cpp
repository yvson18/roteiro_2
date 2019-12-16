#include <iostream>
#include "Trabalhador.h"
#include "TrabalhadorAssalariado.h"
#include "TrabalhadorPorHora.h"
using namespace std;

int main()
{

    TrabalhadorPorHora tph = TrabalhadorPorHora("Dagoberto",12);
    cout<<tph.CalculaPagamentoSemanal(10)<<endl;
    cout<<tph.getSalario()<<endl;
    TrabalhadorAssalariado Perisbaldo("Perisbaldo",12000);
    cout<< Perisbaldo.CalculaPagamentoSemanal()<<endl;
    TrabalhadorPorHora tph1("Astrogildo",10);
    cout<<tph1.getSalario()<<endl;
    cout<<tph1.CalculaPagamentoSemanal(42)<<endl;

    return 0;
}
