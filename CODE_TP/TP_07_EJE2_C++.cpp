#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <string>
#include <conio.h>
using namespace std;

int main() {
	
	int cantidad;
	float precio;
	float impuesto = 21;
	float impuestos_Abono;
	float total_Abono;
	float  precio_Final;
	char nom_Ape[40];
	char descri_Produc[30];

    cout<<("\n Ingrese nombre y apellido del comprador/ra \n");
		cin.getline(nom_Ape,40,'\n'); //Guardo una cadeda de texto con el tamanio indicado el el vector. 
 

	cout <<("\n Ingrese la descripcion del producto \n ");
		cin.getline(descri_Produc,30,'\n');
	
	cout << ("\n  Ingrese la cantidad de productos \n ");
		cin >> cantidad;


	cout<<("\n Ingrese el precio del producto \n");
		cin>> precio;
	

//REALIZO LOS CALCULOS 

    impuestos_Abono = (precio * impuesto)/ 100; // saca el impuesto del producto
    total_Abono = impuestos_Abono + precio;// sumo el impuesto al precio neto
    precio_Final = total_Abono * cantidad;// multiplico el precio final del producto con impuesto y lo multiplico por la cantidad de productos

	cout <<("EL NOMBRE DEL CLIENTE ES:  " )<<nom_Ape<< endl;
	cout <<("Y EL PRODUCTO QUE LLEVA ES:")<<descri_Produc<<endl;
	cout <<("lA CANTIDAD DE PRODUCTOS QUE LLEVA ES: ")<<cantidad<<endl;
	cout <<("EL CUAL TIENE UN VALOR INDIVIDUAL DE: ")<<precio<<endl;
	cout <<("EL IMPUESTO A ABONAR POR PRODUCTO ES DE :")<< impuestos_Abono<<endl;
    cout <<(" EL VALOR DEL PRODUCTO  MAS IMPUESTO ES DE: ")<<total_Abono<<endl;
    cout <<("---------------------------------------------------------");
	cout <<("TOTAL A PAGAR POR TODOS LOS PRODUCTOS ES DE")<<precio_Final<<endl;





    getch();
	return 0;
}
