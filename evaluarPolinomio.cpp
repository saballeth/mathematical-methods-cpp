#include <iostream>
using namespace std;

double evaluarPolinomio(unsigned int grado, double coeficientes[], double x){
	double y = 0;
	int potencia = 1;
	int k = 0;
	for(int i = 0; i <= grado; i++){	
		y = (coeficientes[i] * potencia) + y;
		
		potencia = potencia*x;
	}
		
	return y;	
}
	
int main(){
	unsigned int grado = 4;
	double coeficientes[] = {6, -5, 0.5, -3, 5};
	
	double x = 2;
	cout << evaluarPolinomio(grado, coeficientes, x) << endl;  
	
	return 0;
}