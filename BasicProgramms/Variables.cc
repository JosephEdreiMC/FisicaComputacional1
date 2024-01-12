// Programa que pide ingreso de variables por el usuario y nos da el factorial de un número
// Fecha:18 Octubre 2017
// Condición antes: Es un for Condición despues: Es un while
//Signo ! niega la sentencia

#include <iostream>
using namespace std;
int main ()
{

int N=0;
cout <<"Dame un numero entero positivo" << endl;
cin >> N;

int M=1;
int F=1;

 while (M!=N){
  M=M+1;
  F=F*M;
}

cout<< "Valor final " << F<< endl;
return 0;

}
