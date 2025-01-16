// Calculadora avanzada
#include <iostream>
using namespace std;

operacionesBasicas(double n1, double n2){
	double suma = n1 + n2; 
	double multiplicacion = n1*n2;
	double resta = n1 - n2;
	double division = n1/n2;
	
	cout << "Suma: " << n1 << " + " << n2 << ": " << suma << endl;
	cout << "Resta: " << n1 << " - " << n2 << ": " << resta << endl;
	cout << "Multiplicacion: " << n1 << " x " << n2 << ": " << multiplicacion << endl;
	
	if(n1 == 0){
		cout << "La division sobre un numero 0 es una incoherencia. El resultado es 0" << endl;
	}
	else{
		cout << "division: " << n1 << " / " << n2 << ": " << division << endl;
	}
}

factorialEneNumero(double n1, double n2){
	double factorialN1 = 1;
	double factorialN2 = 1;
	double aux;
	if(n1 > 0){
		for(int i = 1; i < n1; i++ ){
			aux = i + 1;
			factorialN1 = factorialN1*(aux * i);
			
			cout << "i en factorial " << i << endl;
			cout << "aux en factorial " << aux << endl;
			cout << "factorialN1 en factorial " << factorialN1 << endl;
			cout << "Termina bloque" << endl;
		}
		
		for(int i = 1; i <= n1; i++ ){
			aux = i + 1;
			factorialN2 = factorialN2*(aux * i);
		}
		
		cout << "El factorial del numero " << n1 << " es: " << factorialN1 << endl;
		cout << "El factorial del numero " << n2 << " es: " << factorialN2 << endl;
	}
	else{
		cout << "No existe el factorial para un numero negativo o el numero 0" << endl;	
	}	
}

valorAbsolutoEneNumero(double n1, double n2){
	if(n1 > 0){
	cout << "El valor absoluto de " << n1 << " es: " << n1 << " y " << "-" << n1 << endl; 
	}
	else
	 cout << "El valor absoluto de " << n1 << " es: " << -1*n1 << " y " << n1 << endl;
	
	if(n2 > 0){
	cout << "El valor absoluto de " << n2 << " es: " << n2 << " y " << "-" << n2 << endl; 
	}
	else
		cout << "El valor absoluto de " << n2 << " es: " << -1*n2 << " y " << n2 << endl;
		
}

potenciaEneNumero(double n1, double n2){
	double potencia;
	
	cout << "La potencia del numero " << n1 << " es: " << n1*n1 << endl;
	cout << "La potencia del numero " << n2 << " es: " << n2*n2 << endl;
}

main(){
	double n1, n2;
	
	cout << "Digite el primer numero: " << endl;
	cin >> n1;
	
	cout << "Digite el segundo numero: " << endl;
	cin >> n2;
	
	cout << "\n";
	operacionesBasicas(n1, n2);
	
	cout << "\n";
	valorAbsolutoEneNumero(n1, n2);
	
	cout << "\n";	
	potenciaEneNumero(n1, n2);
	
	cout << "\n";
	factorialEneNumero(n1, n2);
}