using namespace std;
#include <iostream>

void ordenar(int arreglo[],int cantidadDeElementos){
	int pocision1 = 0;
	int pocision2 = 4;
	int aux = arreglo[pocision2]
	if(pocision1 > 0 && pocision2 > 0){
		arreglo[pocision2] = arreglo[pocision1];
		arreglo[pocision1] = aux;
	}   
}	
	
	


int main(){
	int arreglo[] = {33, 44, 1, 0, 3, 42, 5, 34, 35, 3, 4}, cantidadDeElementos = 11;
	int resultado; 
	ordenar(arreglo, cantidadDeElementos);
	cout << "Ordenado: "
	for(int i = 0; i < cantidadDeElementos; i++){
		cout << "  " << arreglo[i];
	}
	}

