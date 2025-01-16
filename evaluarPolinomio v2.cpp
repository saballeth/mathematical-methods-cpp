#include <iostream>
using namespace std;

double evaluarPolinomio(unsigned int grado, double coeficientes[], double x) {
    double y = coeficientes[grado]; 

    for (int i = grado - 1; i >= 0; i--) {
        y = coeficientes[i] + (x * y);
	}

    return y;    
}

int main() {
    unsigned int grado = 7;
    double coeficientes[] = {6, -7, 2, -5, 0.5, 0, -3, 5};
    
    double x = -1;
    cout << evaluarPolinomio(grado, coeficientes, x) << endl;  
    
    return 0;
}


