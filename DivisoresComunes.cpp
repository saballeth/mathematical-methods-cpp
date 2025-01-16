#include <iostream>
#include<math.h>
using namespace std;

DivisoresComun(int numero1, int numero2){
	int residual, residual2, totalDivisores = 0;
	if (numero1 >= numero2){
		for(int i = 1;i <= numero2; i++){
			if(numero2%i == 0 && numero1%i == 0){
				totalDivisores = totalDivisores + 1;
			}
		}
	}
	else{
		for(int i = 1;i <= numero1; i++){
			if(numero2%i == 0 && numero1%i == 0){
				totalDivisores = totalDivisores + 1;
			}
		
		}
	}
	
	return totalDivisores;

}


int main(void){
	int numero1, numero2, resultado;
	cout << "Digite el primer numero natural: " << endl;
	cin >> numero1;
	
	cout << "Digite el segundo numero natural: " << endl;
	cin >> numero2;
	
	resultado = DivisoresComun(numero1, numero2);
	cout << "El resultado es: " << resultado;	
}