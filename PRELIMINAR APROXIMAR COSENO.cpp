#include <iostream>
#include <iomanip>
using namespace std; 
 double AproximarACoseno (double x, unsigned int n){
 	double suma = x; 
     double potencia = 1; 
     double factorial = 1.0; 
     int signo = 1; 

     for (unsigned int i = 1; i <= n; i++) {
         potencia *= x*x;  
         factorial *= (2 * i) * (2 * i -1); 
         suma += signo * potencia / factorial; 
         signo *= -1; 
       }

   return suma; 
 }
 int main (){
 	double x;
     unsigned int n;

     cout << "Programa para aproximar un numero a la funcion cos(x)\n";

     cout << "Ingresa el numero a aproximar: ";
     cin >> x;

     cout << "Ingresa el numero de iteraciones: ";
     cin >> n;

     double sumatoria = AproximarACoseno(x, n);

     cout << "\nLa aproximacion del numero " << fixed << setprecision(0) << x;
	 cout << " con " << n << " iteraciones es de: " <<fixed << setprecision(10) << sumatoria << endl;

     return 0;
 }