//Programa. Suma de numeros pares entre 1 y 20
//Fecha: 18-Octubre-2017

#include <iostream>
using namespace std;

int main()
{
 int sum=0;
 int count=1;

while (count <= 20){
 if((count%2) == 0){
  sum = sum + count;
}
count++;
}
cout << sum << endl;
return 0;
}
