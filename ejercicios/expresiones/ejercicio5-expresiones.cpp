//Ejercicio 5: Escriba un fragmento de programa que intercambie los valores de dos variables.

#include<iostream>

using namespace std;

int main(){
	
	int x, y, aux;
	
	cout<<"X = "; cin>>x;
	cout<<"Y = "; cin>>y;
	
	/*
	x=10
	y=5
	
	aux=x
	x=y
	y=aux
	*/
	
	aux = x;
	x = y;
	y = aux;
	
	cout<<"X = "<<x<<" Y = "<<y;
	
	return 0;
}

