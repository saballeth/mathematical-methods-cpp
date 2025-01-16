#include <iostream>
using namespace std;

string convertirABinario(unsigned long int numeroOriginal) {
   string cadenaBinaria = "";
   
   for(int i = numeroOriginal; i != 0; i /= 2){
	   if(i%2 == 1){
	   cadenaBinaria = "1" + cadenaBinaria;
	   }
	   else{
	   	cadenaBinaria = "0" + cadenaBinaria;
	   }
	}
	
	return cadenaBinaria;
}

int main(){
   unsigned long int numero;
   
   cout << "Digite un número entero no negativo: ";
   cin >> numero;

   cout << "El numero " << "(" << numero << ")" << " en binario es: " << endl << convertirABinario(numero) << endl;
}


