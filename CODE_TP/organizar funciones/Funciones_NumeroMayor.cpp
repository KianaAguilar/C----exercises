#include <iostream>
#include<conio.h>
using namespace std;


//EJEMPLO: ENCONTRAR EL MAYOR DE DOS NUMEROS

//PROTOTIPO DE FUNCION

int encontrarMax(int x ,  int y); /* -->aqui solo le estoy indicando al programa que hay una funcion llamada 
encontrar maximo , que me va a devolver un valor entero y que tiene por parametros 
numeros enteros   */







int main() //funcion principal
{	
    int n1, n2;	// declaro variables a usar
	int mayor; // creo una variable donde voy a guardar lo que me devuelva la funcion encontrarMax(n1,n2);*/
	cout<<"Digite dos numero :";// Solicito al usurio que me ingrese dos numeros
	cin >> n1>>n2;     
	
	
	
	 mayor = encontrarMax(n1,n2);/* llamo a la funcion y le paso los parametros (dos numero de tipo entero
	No importa si tienen el mosmi nombre, lo que importa es la ubicacion n1 = x , n2=y
	*/
	
	
	cout<<"EL MAYOR DE LOS DOS NUMERO ES:"<<mayor<<endl;
	getch();
	return 0;
}


int encontrarMax(int x , int y)  //--> definicion de la funcion 
{
     //Comparo cual de los dos nuemeros es mayor
	    int numMax;
    
    	if (x>y)
		{
    		numMax = x;
    	
		}
		else{
			numMax = y;
		}
		
     return numMax; //retorna un valor  ese valor lo debo de retornar a la funcion principal
}


