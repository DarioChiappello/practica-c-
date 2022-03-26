//Ejercicio 2: Escribe un programa que lea de la entrada estándar el precio de un producto y muestre en la salida estándar el precio del producto al aplicarle el IVA.

#include<iostream>

using namespace std;

int main(){
	
	
	float precio, iva = 21, total = 0;

	cout<<"Ingrese el precio del producto: ";cin>>precio;
	
	total = precio + (precio * (iva / 100));
	
	
	cout<<"\nEl precio total de el producto es: "<<total;
	
	
	return 0;
}
