#include <iostream>
#include <iomanip>
using namespace std; 
 double AproximacionDeCoseno (double x, unsigned int iteraciones){
 	double sumandoAndo = x; 
     double potencia = 1; 
     double factorial = 1.0; 
     int cambiosigno = 1; 

     for (int i = 1; i <= iteraciones; i++) {
         potencia *= x*x;  
         factorial *= (2 * i) * (2 * i -1); 
         sumandoAndo += cambiosigno * potencia / factorial; 
         cambiosigno *= -1; 
      
      	cout<< "potencia: " << potencia << endl;
      	cout<< "factorial: " << factorial << endl;
	  	cout<< "Sumando: " << sumandoAndo << endl;
	   }

   return sumandoAndo; 
 }
 int main (){
 	double angulo, sumandoAndo;
     unsigned int iteraciones;

     cout << "Bienvenido a mi humilde programa. Aproximacion de Coseno \n";

     cout << "Ingresa el numero para aproximar a coseno: ";
     cin >> angulo;

     cout << "Ingresa el numero de iteraciones: ";
     cin >> iteraciones;

     sumandoAndo = AproximacionDeCoseno(angulo,iteraciones);

     cout << "\nLa aproximacion del numero " << fixed << setprecision(0) << angulo;
	 cout << " con " << iteraciones << " iteraciones es de:"  <<fixed << setprecision(10) << sumandoAndo << endl;

     return 0;
 }