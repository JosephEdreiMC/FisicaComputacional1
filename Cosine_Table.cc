//Joseph Edrei Moreno Cruz
//29 de novimebre
//Derivada de la función coseno con archivo tabla.
#include <iostream>
#include <string>
#include <cmath>
#include <fstream>
using namespace std;

int main (){
double epsilon=0.1*pow(10, -10);
double x=0.15;
int iterations=100;
double dfxdx;

cout << "x    " << endl;
cout << "ingrese un valor de h " << endl;
cin >> epsilon;
cout << "cos  "<< cos(x) <<endl;
cout << " derivada estimada  :  " << (cos(x+epsilon)-cos(x))/epsilon <<endl;
cout << "derivada conocida (-sin(x)) : " << -1*sin(x) << endl;

ofstream myfile;
myfile.open ("data.csv");
for(int i=-1*iterations; i < iterations ; i++)
{
x=i/10.0;
dfxdx=(cos(x+epsilon)-cos(x))/epsilon;
myfile << x << "," << cos(x) << "," << dfxdx << "," << -1*sin(x) << endl;
}

myfile.close();

return 0;

}
