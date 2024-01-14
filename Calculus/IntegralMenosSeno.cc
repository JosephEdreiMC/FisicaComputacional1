//Joseph Edrei Moreno Cruz
//1 de diciembre 2017
//Integral de la función -sin en un intevalo
#include <iostream>
#include <string>
#include <cmath>
#include <fstream>
#include <stdlib.h>
#include <time.h>
#include<iostream>
using namespace std;

int main ()
{

int i=1;
double n=1;
int m=1;
int k=1;
double x=1;
double r=1;
double p=1;
double sum=0;
double l=0;
//IMPORTANTE: En todo el programa se verá empleado el valor de 20, esto es porque es la "distancia" entre -10 y 10, en caso de requerir la intregar en otro intervalo simplemente cambiar esta "distancia".
for(i=1; i<1000; i++)
{
n=m*pow(10,i);
k=i;
if (1/n<=0){
break;
}
}

k=k-1;
cout<<" El numero maximo de particiones que puede hacer su computadora es: "<<"10^"<<k<<endl;

double N=1*pow(10, k);

cout<<"ingrese el numero de particiones que desee realizar al intervalo -10 a 10"<<endl;
cin>>N;

for(int j=1; j<=N; j++){
l=j;
x=(20/N)*j-10*(1+(1/N));//Esta selección es el punto medio de cada partición, cada particion tiene "longitud" 20/N
//Sin embargo lo anterior da problemas ya que para numeros pares de particiones para cada x existe -x, luego -sin(x)=sin(-x), entonces sin(-x)+sin(x)=0, lo cual hará que la integral numérica siempre sea cero.
r=-1*sin(x)*(20/N);
sum=sum+r;
}

cout<<"la integral calculada de -sin(x) de -10 a 10 es: "<<sum<<endl;
cout<<"la integral exacta de -sin(x) de -10 a 10 es: "<<cos(10)-cos(-10)<<endl;


//Ahora haremos las mismas particiones que en la parte anterior del programa pero en este caso la selección será totalmente aleatoria dentro del intervalo de cada partición, la selección cambiará cada vez que se corra el programa, sin embargo el valor de la integral definida no cambiará, por teorema de Sumas de Riemman.

//srand48(time(NULL));
//int t=0;
//double y=0;
//double q=0;
//double SumaRiemann=0;


//for(int s=1; s<=N; s++){
//t=s;
//y = (-10)+(t-1)*20/N + drand48() % ((-10) + t*20/N +1 - (-10)*(t-1)*20/N);
//q=-1*sin(y)*(20/N);
//SumaRiemann=SumaRiemann+q;
//}
//cout<<"la integral calculada de -sin(x) de -10 a 10 es: "<<SumaRiemann<<endl;
//cout<<"la integral exacta de -sin(x) de -10 a 10 es: "<<cos(10)-cos(-10)<<endl;

return 0; 
}


