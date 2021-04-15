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
	
	
	
		cout << "\n Ingrese el primer  numero "<< "\n" ;// MUESTRA UN MENSAJE POR PANTALLA.
	 	cin  >> numero1 ;  //  LEE DATOS POR TECLADO.
	
     	cout << "\n Ingrese el segundo numeros "<<"\n" ;
		cin >> numero2;
	
	 	cout<<"\n Los numeros ingresados son: " << numero1  << numero2;
	 	
	 	
	 	
	 	if(numero1 > numero2)
	 	
	 	        cout << "\n  EL numero mayor es:" << numero1;
	 	else
	 	
	 			cout << "\n  El numero mayor es:" << numero2;
	 	
	
	
	return 0;
