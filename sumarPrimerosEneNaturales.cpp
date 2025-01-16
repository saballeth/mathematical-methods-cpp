#include <iostream>
using namespace std;

main() {
	int n; 
	int suma = 0;

	cout << "Digite un número natural: " << endl;
	cin >> n;

	if(n > 0) {
		for	(int i = 1; i<=n; i++) {
			suma = suma + i;
		}
		cout << "El resultado de la suma de los primeros " << n << " números naturales es: " << suma;
	} 
	else{
		cout << "El número digitado no es natural";
	}
}

