//Ejercicio 1: Escriba un programa que lea dos números y determine cuál de ellos es el mayor.

#include<iostream>

using namespace std;

int main(){
	
	int n1,n2;
	
	/*
	cout<<"Ingrese numero 1: ";
	cin>>n1;
	cout<<"Ingrese numero 2: ";
	cin>>n2;
	*/
	
	//ingresar dos numeros juntos
	cout<<"Ingrese 2 numeros: ";
	cin>>n1>>n2;
	
	if(n1 == n2){
		cout<<"Ambos numeros son iguales";
	} else if(n1>n2){
		cout<<"El primer numero "<<n1<<" es mayor a "<<n2;
	}else{
		cout<<"El segundo numero "<<n2<<" es mayor a "<<n1;
	}
	
	
	return 0;
}
