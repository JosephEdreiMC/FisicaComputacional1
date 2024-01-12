//Programa. Suma de numeros impares entre 1 y 10
//Fecha: 16-Octubre-2017

#include <iostream>
using namespace std;

int main()
{
 int sum=0;
 int count=1;

while (count < 10){
 if((count%2) > 0){
  sum = sum + count;
}
count++;
}
cout << sum << endl;
return 0;
}
