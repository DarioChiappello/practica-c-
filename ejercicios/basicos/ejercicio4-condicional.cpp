//Ejercicio 4: Comprobar si un número digitado por el usuario es positivo o negativo.

#include<iostream>

using namespace std;

int main(){
	
	int numero;
	
	cout<<"Ingrese numero: ";
	cin>>numero;
	
	if(numero < 0){
		cout<<"Numero negativo";
	}else{
		cout<<"Numero positivo";
	}
	
	
	return 0;
}
