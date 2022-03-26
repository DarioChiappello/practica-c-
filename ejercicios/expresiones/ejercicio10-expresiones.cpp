/*
Ejercicio 10: Escriba un programa que calcule las soluciones de una ecuación de segundo grado de la forma ax^2 + bx + c = 0, teniendo en cuenta que: 
(-b+sqrt(pow(b,2)-4*a*c))/(2*a) y (-b-sqrt(pow(b,2)-4*a*c))/(2*a)
*/

#include<iostream>
#include<math.h>

using namespace std;

int main(){
	
	
	float a,b,c, resultado1, resultado2;
	
	cout<<"valor de a: "; cin>>a;
	cout<<"valor de b: "; cin>>b;
	cout<<"valor de c: "; cin>>c;
	
	resultado1 = (-1 * b + sqrt(pow(b,2)-4*a*c))/(2*a);
	resultado2 = (-1 * b - sqrt(pow(b,2)-4*a*c))/(2*a);
	
	
	cout<<"Resultados: "<<resultado1<<" y "<<resultado2<<endl;
	
	
	
	return 0;
}
