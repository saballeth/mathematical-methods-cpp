#include <iostream>
#include<math.h>
using namespace std;

SumaSinLlevar(int numero1, int numero2){
	int residuo1, residuo2, SumaDeResiduos, potencia = 1;
	
	while(numero1!=0){
		residuo1 = numero1%10;
		residuo2 = numero2%10;
		if (residuo1+residuo2 > 9){
			SumaDeResiduos = residuo1+residuo2%10;
			
		}
		else{
			SumaDeResiduos = residuo1+residuo2;
		}
		potencia = potencia * 10;
		SumaDeResiduos += potencia; 
		numero1 = numero1/10;
	}
	return SumaDeResiduos;
}

int main(void){
	unsigned int numero1, numero2, resultado;
	cout << "Digite el primer numero natural no negativo: " << endl;
	cin >> numero1;
	
	cout << "Digite el segundo numero natural no negativo: " << endl;
	cin >> numero2;
	
	resultado = SumaSinLlevar(numero1, numero2);
	cout << "El resultado es: " << resultado;	
}




