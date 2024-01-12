//Joseph Edrei Moreno Cruz
//22 de novimebre
//Derivada de la función coseno con archivo tabla.

int main (){
double epsilon=0.1e-10;
double x=0.15; //radians
int iterations=100;
double dfxdx;
cout << "x    " << endl;
cout << "dame un valor de h " << endl;
cin >> epsilon;
cout << "cos  "<< fx(x) <<endl;
cout << " derivada numérica  :  " << (fx(x+epsilon)-fx(x))/epsilon <<endl;
cout << "derivada conocida (-sin(x)) : " << -1*dx(x) << endl;

ofstream myfile;
myfile.open("derivadacoseno.csv");
for(int i=-1*iterations; i < iterations ; i++)
{
x=i/10.0;
dfxdx=(fx(x+epsilon)-fx(x))/epsilon;
myfile << x << "," << fx(x) << "," << dfxdx << "," << dx(x) << endl;
}
myfile.clos


