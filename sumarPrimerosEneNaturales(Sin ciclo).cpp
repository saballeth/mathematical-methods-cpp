//sin ciclo
#include <iostream>
using namespace std;

main(){
int N;	
int suma = 0;

cout << "Digite un numero N natural:" << endl;
cin >> N;

if (N > 0){
	suma = N*(N+1)/2;
	cout << "El resultado de la suma es: " << suma;	
}
else
	cout << "Digite un numero natural mayor a 0";
}