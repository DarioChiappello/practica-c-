/*
Ejercicio 9: Realice un programa que calcule el valor que toma la siguiente función para unos valores dados de x e y: f(x,y) = sqrt(x) / (pow(y,2)-1)
*/

#include<iostream>
#include<math.h>
//math.h = libreria trigonometrica de c++

using namespace std;

int main(){
	
	float x,y, resultado = 0;
	
	cout<<"Valor de x: "; cin>>x;
	cout<<"Valor de y: "; cin>>y;
	
	resultado = (sqrt(x))/(pow(y,2)-1);
	
	cout<<"Resultado: "<<resultado;
	
	
	
	return 0;
}
