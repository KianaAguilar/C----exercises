#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <string>
#include <conio.h>


using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	
	
	int numero1 ;
	int numero2 ;
	int suma;
	
	    cout <<"Este programa suma dos valores ingresados por teclado";
	    
		cout << "\n Ingrese el primer  numero "<< "\n" ;// MUESTRA UN MENSAJE POR PANTALLA.
	 	cin  >> numero1 ;  //  LEE DATOS POR TECLADO.
	
     	cout << "\n Ingrese el segundo numeros "<<"\n" ;
		cin >> numero2;
	
	 	cout<<"\n Los numeros ingresados son: " << numero1  << numero2;
	 	
	 	suma = numero1 + numero2;// REALIZO OPERACION DE SUMA CON LOS DOS NUMERO INGRESADOS
	 	
	 	
	 	cout "\n La suma de el numero" <<numero1 "y" numero2 " \n es: \nl " << suma; 
	 	
	 	
	 	
	
	return 0;
