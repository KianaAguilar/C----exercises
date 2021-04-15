/*Plantillas de Funcion: sirve para hacer un tipo de dato
 general.(poner cualquier tipo de valor, int, float, etc..
 Ejemplo: Sacar el valor absoluto de un numero*/

#include<iostream>
#include<conio.h>
using namespace std;

int main (){
	
	
	//Prototipo de funcion 
    template <class TIPOD> // TIPOD ENGLOBA DIFERENTES TIPOS DE DATOS 
	void mostrarAbs(TIPOD numero);// funcion tipo void  (ENTRE PARENTESIS PUSE EL VALOR QUE DESCONOCO) 
	
	int num1 = 4;
	float num2 = 56.67;
	double num3 = 123.25456
	
	//AHORA LLAMO LA FUNCION 
	
	mostrarAbs(num1);
	mostrarAbs(num2);
	mostrarAbs(num3);
	
	getch();
	return 0 ;
	
}

 // funcion 
 template <class TIPOD>
 void mostrarAbs(TIPOD numero){
	if(numero<0){
		numero = numero *-1;
	}
	
	cout<<"El valor absoluto del numero es: "<<numero<endl;
}



