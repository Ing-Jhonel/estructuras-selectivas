#include <iostream>
using namespace std;
// Calcular el número de pulsaciones que debe tener una persona por cada 10 segundos de ejercicio aeróbico; 
// la fórmula que se aplica es:
// cuando el sexo es femenino : num. pulsaciones = (220 - edad)/10
// y si el sexo es masculino : num. pulsaciones = (210 - edad)/10
// ENTRADA|| edad: edad del usuario  sexo: sexo del usuario
// SALIDA|| numero_pulsaciones: numero de pulsaciones del usuario
int main(){
	
	double numero_pulsaciones, edad; 
	string sexo;
	cout << "CALCULADORA DE PULSACIONES POR 10 SEGUNDOS DE EJERCICIO AEROBICO" << endl;
	cout << "****************************************************************" << endl << endl;
	cout << "Ingrese su edad: ";
	cin >> edad;
	cout << endl;
	cout << "Ingrese su sexo (masculino/femenino): ";
	cin >> sexo;
	while(sexo != "masculino" && sexo != "femenino"){
		cout << endl;
		cout << "No valido." << endl;
		cout << "Ingrese su sexo (masculino/femenino): ";
		cin >> sexo;
	}
	if ( sexo == "masculino"){
		numero_pulsaciones = (210 - edad)/10;
	} else {
		numero_pulsaciones = (220 - edad)/10;
	}
	cout << "----------------------------------------------------------------------------" << endl;
	cout << "Su numero de pulsaciones por cada 10 segundos de ejercicio aerobico es: " << numero_pulsaciones << endl;
	return 0;
}
