#include <iostream>
#include "FiguraGeometrica.h"
#include "Triangulo.h"
#include "Quadrado.h"
#include "Circulo.h"

using namespace std;

int main()
{
   Triangulo t1("Equilatero");
   cout<<t1.CalculaArea(6,2)<<endl;
   cout<<t1.getNome()<<endl;
   Quadrado q1("Quadrilatero");
   cout<<q1.CalculaArea(9)<<endl;
   cout<<q1.getNome()<<endl;
   Circulo c1("Redondo");
   cout<<c1.CalculaArea(1)<<endl;
   cout<<c1.getNome()<<endl;

   return 0;
}
