#include <iostream>
#include "Consultor.h"

using namespace std;

int main()
{
    Consultor cn1("12321","Dr. Dre",1500.50);
    Funcionario func1("21234","Eminem",565.45);

    cout<<cn1.getSalario(21)<<endl;
    cout<<func1.getSalario()<<endl;
    cn1.setSalario(2000.45);
    cout<<cn1.getSalario(10)<<endl;
}
