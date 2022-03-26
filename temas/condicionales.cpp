#include<iostream>

using namespace std;

int main(){
	
	int numero, dato = 5;
	
	cout<<"Ingrese numero: ";
	cin>>numero;
	
	if(numero == dato){
		cout<<"El numero es 5"<<endl;
	}else{
		cout<<"El numero es diferente de 5"<<endl;
	}
	
	if(numero != dato){
		cout<<"El numero es diferente de 5"<<endl;
	}else{
		cout<<"El numero es 5"<<endl;
	}
	
	if(numero >= dato){
		cout<<"El numero es mayor o igual a 5"<<endl;
	}else{
		cout<<"El numero es menor a 5"<<endl;
	}
	
	
	return 0;
}
