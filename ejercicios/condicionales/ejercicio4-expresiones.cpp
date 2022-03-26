//Ejercicio 4: Escribe la siguiente expresión como expresión en C++: a + (b/(c-d))

#include<iostream>

using namespace std;

int main(){
	
	float a,b,c,d, resultado = 0;
	
	cout<<"Ingrese valor de a: ";cin>>a;
	cout<<"Ingrese valor de b: ";cin>>b;
	cout<<"Ingrese valor de c: ";cin>>c;
	cout<<"Ingrese valor de d: ";cin>>d;
	
	resultado = a + (b/(c-d));
	
	cout<<"\nResultado: "<<resultado<<endl;
	
	return 0;
}
