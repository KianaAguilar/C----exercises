#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <string>
#include <conio.h>
using namespace std;

int main()
{
	char mes;
    char meses[12];
    float total_Vendido =0;
	float ventas[12];
	int i;
	char nom_Ape[50];

	    cin.ignore ()
		cout<<("Ingrese apellido y nombre del vendedor \n");
	    cin.getline ( nom_Ape,'\n');
	    
	    
	
		
	for(i=0;i<12;i++) {
		cout<<("Ingrese el mes \n")<<endl;
		cin>> meses[i];
		
	    cout<<("Ingrese el monto a pagar por el mes \n")<<meses[i]<<endl;
     	cin >> ventas[i];
     	
     	
     	total_Vendido = 	total_Vendido +  ventas[i];
	}
	
	
	   cout<<("EL NOMBRE DEL VENDEDOR ES:\n") <<nom_Ape<<endl;
	   
	   for ( i = 0; i <12 ; i++){
	   	
	     cout<<(" Las ventas de cada mes son "\n);
	     cin >> meses[i], ventas[i];
	   }
	   
	   cout<<("LAS VENTAS TOTALES DE TODOS LOS MESE  ES DE:\n")<< total_Vendido;
	   
	   
	   
	   
	  

	    
	return 0;
}

