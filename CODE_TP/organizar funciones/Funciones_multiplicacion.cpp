/* Ejercicio:
   Escriba una funcion llamada mult() que acepte dos numero
   con punto flotante como paramentros,
	multipleque estos dos numero y despliegue el resultado*/

#include<iostream>
#include<conio.h>
using namespace std;
	//1 necesitamos pedir los datos al usuario
	//2 multiplicarlos sin mostrar el resultado
	
		//Prototipo de funcion. 
		void pedirDatos(); /*va a pedir al usuario 
		un valor por eso() esta vacio,/En esta pido dos valores al usuario*/
		void mult(float x, float y);/* esta funcion es para multiplicar
		 los datos y va a tener dos parametros*/
		 
		 	float num1,num2; //estas son variables de tipo global las puede leer todo el codigo
int main(){
     
	pedirDatos();//llamada a mi primera funcion
	mult(num1,num2);     	//llamada a mi segunda funcion


	
	
	getch();
	return 0;
}

	void pedirDatos(){
		cout<<"Digite dos numeros:";
		cin>> num1>>num2;
		
	}
	
	void mult(float x, float y){
	float multiplicacion = x*y;	// aqui hace la operacion de los dos valores ingresados, este float seria una variable local\
	
	
	cout<<"La multiplicacion es:"<<multiplicacion<<endl;
		
		
	}
	
	
	
	
	
