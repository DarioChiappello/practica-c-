//Ejercicio 3: Realice un programa que lea un valor entero y determine si se trata de un número par o impar.

#include<iostream>

using namespace std;

int main(){
	
	int numero;
	
	cout<<"Ingrese numero: ";
	cin>>numero;
	
	if(numero == 0){
		cout<<"El numero es 0";
	}
	else if(numero % 2 == 0){
		cout<<"Numero par";
	}else{
		cout<<"Numero impar";
	}
	
	
	
	return 0;
}
