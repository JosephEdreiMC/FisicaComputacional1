//Programa diagrama de flujo
#include <iostream>
#include <string>

using namespace std;
#include <iostream>
#include <string>
int es_Primo(int x)
{
int i;
bool esPrimo=1;
for(i = 2; i <= x / 2; ++i)
  {
      if(x % i == 0)
      {
          esPrimo = false;
          break;
      }
  }
return esPrimo;  //Esto me manda flag=0 cuando son primos, lo cual es correcto, no es divisible por ninguna i, por alguna razón dice que para 1,2,3 flag=1, lo cual parece no tener sentido
}
int main(){
int p=0;
int a=0;
cout << "Enter a positive integer: ";
  cin >> p;
a=es_Primo(p);
cout<< a<<endl;

return 0;
}

