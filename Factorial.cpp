#include<iostream>
#include<iomanip>
using namespace std;
void AproximacionSeno(int iteraciones, float angulo);
int main(){
	int iteraciones;
	float angulo;
	cout<<"Digite el valor de seno: ";
	cin>>angulo;
	cout<<"Digite el numero de interacciones: ";
	cin>>iteraciones;
	AproximacionSeno(iteraciones,angulo);
	
	return 0;
}
void AproximacionSeno(int iteraciones, float angulo){
	int elevar1=1;
	long double elevarx=angulo;
	int factorial=1;	
	long double resultado=0;
	for (int i=1;i<=iteraciones;i++){
		elevar1*=-1;
		resultado+=(elevar1*elevarx)/factorial;
		cout<<resultado<<endl;
		elevarx*=angulo*angulo;
		factorial*=(2*i+1)*(2*i);
		}
	cout<<fixed<<setprecision(20)<<resultado<<endl;
}



