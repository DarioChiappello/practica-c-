//Ejercicio 2: Escribe la siguiente expresión como expresión en C++: (a+b)/(c+d)

#include<iostream>

using namespace std;

int main(){
	float a,b,c,d, resultado = 0;
	
	cout<<"Primer numero: ";cin>>a;
	cout<<"Segundo numero: ";cin>>b;
	cout<<"Tercer numero: ";cin>>c;
	cout<<"Cuarto numero: ";cin>>d;
	
	resultado = (a+b)/(c+d);
	
	cout<<"\nResultado: "<<resultado;
	
	
	
	return 0;
}
