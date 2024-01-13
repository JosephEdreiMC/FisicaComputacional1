// Diagrama de flujo Tarea
// Fecha:22 Octubre 2017
// Condición antes: Es un for Condición despues: Es un while

#include <iostream>
#include <string>

using namespace std;
int main()
{
   int S =12;
   int p=0;
   int i=1;
   bool Primo = true;
   cout << "Ingrese un entero no negativo" << endl;
   cin >> p;
   while (1)
   {
      while (1)
      {
         while (1)
         {
            if (p%2 == 0)
            {
               p =p+1;
            }
            if (p%2 != 0)
            {
             for(i=1; i<=p/2; ++i)
             {
             if(p%i != 0)
             {
             Primo = true;
             break;
             }
            } 
            if (Primo) break;
            p =p+2;
            }
         }
         if (p>=S) break;
         S =S-p;
         p =p+2;
      }
      S = S-1;
      if (S==0) break;
      p =p+2;
   }
   cout << "Valor final " << p << endl;
   return 0;
}
