#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <string>
#include <conio.h>
using namespace std;

int main() {
	
	
	
	int Hora,Minutos,Segundos,Hr_segundo,Mi_segundo,Total;
	
	
	
	cout << ("Ingrese hora \n");
	cin>> Hora;
	
	cout << "Ingrese minutos\n";
	cin>> Minutos;
	
	cout << "Ingrese segundos\n";
	cin>> Segundos;
	
	Hr_segundo = Hora * 3600;
	Mi_segundo  =  Minutos * 60;
	
	Total= Hr_segundo + Mi_segundo + Segundos;

	cout << "la cantidad de segundos es:\n" <<Total;
	
	
	return 0;
}

