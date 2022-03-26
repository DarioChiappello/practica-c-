//Escribe la siguiente expresión como expresión en C++: (a+(b/c))/(d+(e/f))

#include<iostream>

using namespace std;

int main(){
	
	float a,b,c,d,e,f, resultado = 0;
	
	cout<<"Valor de a: "; cin>>a;
	cout<<"Valor de b: "; cin>>b;
	cout<<"Valor de c: "; cin>>c;
	cout<<"Valor de d: "; cin>>d;
	cout<<"Valor de e: "; cin>>e;
	cout<<"Valor de f: "; cin>>f;
	
	resultado = (a+(b/c))/(d+(e/f));
	cout<<"\nEl resultado es: "<<resultado;
	
	
	
	return 0;
}
