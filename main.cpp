#include <iostream>
using namespace std; 

int main ()  {
	
	int saldo_inicial = 1000; 
	int saldo, reintegro, opcion, agregar; 
	
	cout<<"Bienvenido a su cajero virtual"<<endl; 
	cout<<"Escoja una opcion"<<endl;
	cout<<"Opcion 1: Ingrese en su cuenta"<<endl; 
	cout<<"Opcion 2: Reintegro"<<endl; 
	cout<<"Opcion 3: Ver saldo en su cuenta"<<endl;
	cout<<"Opcion 4: Salir"<<endl;  
	cout<<"Opciones"<<endl;
	
	cin>>opcion;
	
	
	if(opcion == 1){
		cout<<"Ingrese la cantidad a depositar: "<<endl;
		cin>>agregar; 
		 
		 saldo = saldo_inicial + agregar; 
		 
		 cout<<"ver la cantidad disponible en su cuenta: "<<saldo<<endl; 
		 
	} else if (opcion == 2) {
		cout<<"Cuanta cantidad desea retirar"<<endl; 
		cin>>reintegro; 
		
		if (reintegro> 1000) {
			cout<<"la cantidad digitada es mayor a 1000, digite de nuevo la cantidad"<<endl; 
			cin>>reintegro; 
		} saldo = saldo_inicial - reintegro;
		cout<<"cantidad disponible en su cuenta: "<<saldo; 
		
	}  else if (opcion == 3) {
		
		cout<<"la cantidad disponible en su cuenta es de: "<<saldo_inicial; 
	} 
	else if (opcion == 4) {
		
		cout<<"Gracias por utilizar nuestro cajero automatico"<<endl; 
	}
	 else {
		
		cout<<"se equivoco de opcion, por favor intente nuevamente"<<endl;
	}
	
	cin.get();
	return 0; 
	
}
