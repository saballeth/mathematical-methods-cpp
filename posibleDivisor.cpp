#include <iostream>
using namespace std;

bool posibleDivisor(int arreglo[], int cantidadDeElementos, int posibleDivisor){
	bool verificador = false;
	int contador = 0;
	for(int i = 0; i < cantidadDeElementos; i++){
		if(arreglo[i] % posibleDivisor == 0){
			contador++;
			if(contador == 2){
				verificador = true;	
			}
		}
	}
return verificador;
}

int main(){
	int arreglo[] = {30, 36, 10};
	int cantidadDeElementos = 3;
	int PosibleDivisor = 5;
	cout << "Es: " << posibleDivisor(arreglo, cantidadDeElementos, PosibleDivisor);
	return 0;
}