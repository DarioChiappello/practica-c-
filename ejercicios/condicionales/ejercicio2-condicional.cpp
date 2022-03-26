//Ejercicio 2: Escriba un programa que lea tres números y determine cuál de ellos es el mayor.

#include<iostream>

using namespace std;

int main(){
	
	int n1,n2,n3;
	
	cout<<"Ingrese numero 1: ";
	cin>>n1;
	cout<<"Ingrese numero 2: ";
	cin>>n2;
	cout<<"Ingrese numero 3: ";
	cin>>n3;
	
	if(n1>n2){
		if(n1>n3){
			cout<<"El primer numero "<<n1<<" es mayor";
		}else{
			cout<<"El tercer numero "<<n3<<" es mayor";
		}
		
	}else{
		if(n2>n3){
			cout<<"El segundo numero "<<n2<<" es mayor";
		}else{
			cout<<"El tercer numero "<<n3<<" es mayor";
		}
	}
	
	
	return 0;
}
