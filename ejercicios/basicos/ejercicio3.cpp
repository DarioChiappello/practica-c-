/*
Ejercicio 3: Realice un programa que lea de la entrada estándar los siguientes datos de una persona:
 Edad: dato de tipo entero.
 Sexo: dato de tipo carácter.
 Altura en metros: dato de tipo real.
Tras leer los datos, el programa debe mostrarlos en la salida estándar.
*/

#include<iostream>

using namespace std;

int main(){
	
	int edad;
	//char sexo; // De esta forma guarda solo un caracter
	char sexo[10]; // De esta forma tiene un limite de 10 caracteres
	float altura;
	
	cout<<"Ingrese edad del usuario: "<<endl;cin>>edad;
	cout<<"Ingrese sexo del usuario: "<<endl;cin>>sexo;
	cout<<"Ingrese altura del usuario: "<<endl;cin>>altura;
	
	cout<<"Edad: "<<edad<<" Sexo: "<<sexo<<" Altura: "<<altura;
	

	return 0;
}
