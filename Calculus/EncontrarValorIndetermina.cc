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
//double epsilon=0.1*pow(10, -10);
//double x=0.15;
//int iterations=100;
//double dfxdx;

int i=1;
double n=1;
int m=1;
int k=1;

for(i=1; i<1000; i++)
{
n=m*pow(10,i);
k=i;
if (1/n<=0){
break;
}
}
cout<<"el valor maximo para i es "<< k-1 <<endl;
cout<<"el valor maximo para M es "<< "1*pow(10,"<<k-1<<")"<<" antes de que la operación 1/M se indetermine"<<endl;
return 0;
}

