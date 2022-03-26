/*
Ejercicio 8: Escriba un programa que lea de la entrada estándar los dos catetos de un triángulo rectángulo y escriba en la salida estándar su hipotenusa.
*/

#include<iostream>

using namespace std;

int main(){
	
	float cateto1, cateto2, hipotenusa = 0;
	
	cout<<"Cateto 1: "; cin>>cateto1;
	cout<<"Cateto 2: "; cin>>cateto2;
	
	hipotenusa = (cateto1 * cateto1) + (cateto2 * cateto2);
	cout<<"Hipotenusa: "<<hipotenusa;
	
	
	return 0;
}
