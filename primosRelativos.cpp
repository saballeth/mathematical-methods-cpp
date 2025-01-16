#include <iostream>
using namespace std;

bool primosRelativos(int arreglo[]){
	bool verificador = true;
	for(int j = 2; j <= arreglo[0]; j++){
		if(arreglo[0] % j == 0 && arreglo[1] % j == 0 && arreglo[2] % j == 0){
			verificador = false;
		}
	}
	
	return verificador;
}
int main(){
	int arreglo[] = {18, 35, 121};
	cout << "Es: " << primosRelativos(arreglo);
	return 0;
}