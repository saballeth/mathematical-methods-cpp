#include <iostream>
using namespace std;



double evaluarPolinomio(unsigned int grado, double coeficientes[], double x) {
    float p = 0.0;
    double exponente = x;
	for (int i = 0; i <= grado; i++){
    	p = p + coeficientes[i]*exponente;
		exponente = x*exponente;
	}
return p;
}

int main() {
   double coeficientes[] = {6, -7, 2, -5, 0.5, 0, -3, 5};
   cout << "P(" << -1 << ") = " << evaluarPolinomio(7, coeficientes, -1) << ".\n";
   return 0;
}




