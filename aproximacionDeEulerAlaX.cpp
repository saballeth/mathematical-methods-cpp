#include <iostream>
using namespace std;

double aproximarEulerALaX(double x, int n) {
	double factorial = 1;
	double potencia = 1;
	double aproximacion = 0;   

	for(int i = 0; i <= n; i++){
		aproximacion = (potencia/factorial) + aproximacion;
		potencia = x * potencia;
		factorial = (i + 1)* factorial;
	}
	
	return aproximacion; 
}

int main() {
    double x;
   	int n;
   
	cout << "PROGRAMA PARA APROXIMAR LA EXPONENCIAL DE X " << endl;
   	
    cout << "Digite el valor de x: " << endl;
   	cin >> x;

   	cout << "Digite el número de iteraciones: " << endl;
   	cin >> n;

   	cout << "Exponencial(" << x << ") es aproximadamente igual a " << aproximarEulerALaX(x, n) << "." << endl;

   	return 0;
}





