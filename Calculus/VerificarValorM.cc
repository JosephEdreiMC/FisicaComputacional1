//Joseph Edrei Moreno Cruz
//29 de novimebre
//Integral de la función coseno
#include <iostream>
#include <string>
#include <cmath>
#include <fstream>
using namespace std;

int main ()
{
int i=1;
double M=1;
double n=1;

cout<<"ingrese el valor de i" <<endl;
cin>>i;

M=1*pow(10,i);
n=1/M;

cout<<"verificar que el siguiente valor no sea cero "<< n<<endl;
cout<<"el valor maximo para M es "<< M<< " antes de que la operación 1/M se indetermine"<<endl;

return 0;
}
