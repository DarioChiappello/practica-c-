/*
Ejercicio 7: La calificaci�n final de un estudiante es la media ponderada de tres notas:
 la nota de pr�cticas que cuenta un 30% del total, la nota te�rica que cuenta un 60% y la nota de participaci�n que cuenta el 10% restante. 
 Escriba un programa que lea de la entrada est�ndar las tres notas de un alumno y escriba en la salida est�ndar su nota final.
*/

#include<iostream>

using namespace std;

int main(){
	
	float practica, teorica, participacion, nota_final = 0;
	
	cout<<"Ingrese nota practica: "; cin>>practica;
	cout<<"Ingrese nota teorica: "; cin>>teorica;
	cout<<"Ingrese nota participacion: "; cin>>participacion;
	
	practica *= 0.3; //practica = practica *0.3
	teorica *= 0.6;
	participacion *= 0.1;
	
	nota_final = practica + teorica + participacion;
	cout<<"Nota final: "<<nota_final;
	
	
	return 0;
}
