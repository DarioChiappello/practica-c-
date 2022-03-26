//Ejercicio 6: Escriba un programa que lea la nota final de cuatro alumnos y calcule la nota final media de los cuatro alumnos.

#include<iostream>

using namespace std;

int main(){
	
	float nota1, nota2, nota3, nota4, promedio = 0;
	
	
	cout<<"Nota alumno 1: "; cin>>nota1;
	cout<<"Nota alumno 2: "; cin>>nota2;
	cout<<"Nota alumno 3: "; cin>>nota3;
	cout<<"Nota alumno 4: "; cin>>nota4;
	
	promedio = (nota1 + nota2 + nota3 + nota4) /4;
	
	cout<<"\nPromedio de notas: "<<promedio;
	
	return 0;
}
