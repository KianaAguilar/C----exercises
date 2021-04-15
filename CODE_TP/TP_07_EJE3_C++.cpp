#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <string>
#include <conio.h>
using namespace std;

int main(){
	
	int i;
	int cantidad;
	int cantidad_Product;
	float precio;
	float impuesto = 21;
	float impuesto_Abonar;
	float precio_Final;
	float var_Acumtotal;
    float total_total;
	
	cout << ("Ingrese la cantidad de productos que quisiera facturar:  \n");
	cin >> cantidad;
	
	
	for (int i = 0 ; i <= cantidad-1 ;i++){
		
		impuesto_Abonar = 0; // DEJO VACIAS LAS VARIABLES PARA INGRESAR NUEVOS VALORES.
        precio_Final    = 0;
        total_total     = 0;
		
			cout << ("\n  Ingrese la cantidad por producto numero  \n" );
					cin >> cantidad_Product;
					
    		 cout <<("----------------------------------------------------------");

			cout << ("\n Ingrese el precio por producto \n");
					cin >> precio;
	cout <<("----------------------------------------------------------");
	
        impuesto_Abonar = (precio * impuesto)/100;// CALCULA IMPUESTO A PAGAR POR EL PRODUCTO
        precio_Final    = impuesto_Abonar + precio; // SUMA EL IMPUESTO CON EL PRECIO NETO
        total_total     = precio_Final * cantidad_Product;// MULTIPLICA EL PRECION CON EL IMPUESTO POR LA CANTIDAD DE PRODUCTOS INGRESADOS
    
        var_Acumtotal  = var_Acumtotal + total_total; //SUMA TODOS LOS PRECIOS (CON IVA INCLUIDO)
        
    
	}
	
		cout <<("--------------------------------------------------------------------");
	cout << ("EL VALOR TOTAL A PAGAR POR TODO LOS PODUCTOS INGRESADOS ES DE: \n ")<<  var_Acumtotal <<endl;
	
	
	
	 return 0 ;
	 

	
	
}





         
