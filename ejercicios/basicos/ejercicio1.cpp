//Ejercicio 1: Escribe un programa que lea de la entrada est�ndar dos n�meros y muestre en la salida est�ndar su suma, resta, multiplicaci�n y divisi�n.

#include<iostream>

using namespace std;

int main(){
	
	float number1;
	float number2;
	
	
	
	cout<<"Ingrese el primer numero: ";
	cin>>number1;
	cout<<"\nIngrese el segundo numero: ";
	cin>>number2;
	
	float suma = number1 + number2;
	float resta = number1 - number2;
	float multiplicacion = number1 * number2;
	float division = number1 / number2;
	
	cout<<"\nLa suma es: "<<suma;
	cout<<"\nLa resta es: "<<resta;
	cout<<"\nLa multiplicacion es: "<<multiplicacion;
	cout<<"\nLa division es: "<<division;
	
	
	return 0;
}
