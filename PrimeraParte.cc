//Programa diagrama de flujo
#include <iostream>
#include <string>

using namespace std;
#include <iostream>
#include <string>
int esPrimo(int x)
{
int flag = 0;
int i = 2;
for(i; i <= x / 2; ++i)
  {
      if(x%i == 0)
      {
          flag = 1;
}
return flag;
}
}

int main()
{
  int p=0;

  cout << "Enter a positive integer: ";
  cin >> p;
do
          {  
            if (p%2 == 0)
            {
               p =p+1;
            }
            if(esPrimo(p)==0)
            p=p+2;
}while(esPrimo(p)==0);
cout<< p<< endl;
            
  return 0;
}
