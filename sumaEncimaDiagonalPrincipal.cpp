#include <iostream>
#define LIMITE 100

int sumaEncimaDeLaDiagonalPrincipal(int n, int A[LIMITE][LIMITE]){
	int sumaEncimaDiagonal = 0;
	int aux;
	int aux2 = 0; 
	for(int i = n - 1; i > 0; i--){
		for(int j = 0; j < n - 1; j++){
			aux = A[j][i];
			sumaEncimaDiagonal = aux + sumaEncimaDiagonal;
		}
	}
	return sumaEncimaDiagonal;
}

int main(){
	int n = 3;
	int A[LIMITE][LIMITE] = {{0, 4, 2}, 
							 {0, 4, 2},
							 {0, 4, 2}};
	std::cout << "La suma es: " << sumaEncimaDeLaDiagonalPrincipal(n, A);
	return 0;
};