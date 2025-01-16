#include <iostream>
#include <locale.h>
using namespace std;

int main(){
	int n;
	bool primo = true;
	setlocale(LC_CTYPE, "Spanish");
	
	cout << "Digite un número natural: ";
	cin >> n;
	
	if (n > 0){	
		for(int i = 2; i <= n/2; i++){
			if(n%i == 0){
				primo = false;		
				break;
			}
		}
	
		if(primo){
			cout << "El número " << n << " es primo";
		}
		else{
			cout << "El número " << n << " No es primo";	
		}
	}
	else{
		cout << "El número digitado no es natural";
	}
}