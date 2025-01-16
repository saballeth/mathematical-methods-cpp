#include<iostream>
#include<iomanip>
using namespace std;
void AproximarSeno(int iteraciones, float angulo);
int main(){
	int iteraciones;
	float angulo;
	cout<<"Digite el valor de seno: ";
	cin>>angulo;
	cout<<"Digite el numero de interacciones: ";
	cin>>iteraciones;
	AproximarSeno(iteraciones,angulo);
	
	return 0;
}
void AproximarSeno(int iteraciones, float angulo){
	int elevar1=1;
	long double elevarx=angulo;
	int factorial=1;	
	long double resultado=0, ele;
	for (int i=1;i<=iteraciones;i++){
		resultado+=(elevar1*elevarx)/factorial;
		ele = elevar1*elevarx;
		elevar1*=-1;
		
		elevarx*=angulo*angulo;
		factorial*=(2*i+1)*(2*i);
		
		cout<< "Exponente: " << ele <<endl;
		cout << "Factorial: " << factorial << endl;
		cout<< "resultado: " << resultado << endl;
		}
	cout<<fixed<<setprecision(20)<<resultado<<endl;
}
