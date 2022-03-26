//1. Escribe las siguientes expresiones en c++

#include<iostream>

using namespace std;

int main(){
	float a,b, resultado = 0;
	
	cout<<"Primer numero: ";cin>>a;
	cout<<"Segundo numero: ";cin>>b;
	
	resultado = (a/b) + 1;
	
	cout.precision(2); //Redondea el resultado en decimales
	cout<<"\nResultado: "<<resultado;
	
	
	
	return 0;
}
