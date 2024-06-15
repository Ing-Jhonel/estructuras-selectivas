#include <iostream>
using namespace std;

int main(){
	
	double n_pulsaciones, edad, masculino, femenino; string sexo;
	cout << "Ingrese su edad: ";
	cin >> edad;
	cout << "¿De que sexo es usted?: ";
	cin >> sexo;
	if ( sexo == "masculino"){
		n_pulsaciones = (210 - edad)/10;
		cout << "Su numero de pulsaciones por cada 10 segundos de ejercicio aerobico es: " << n_pulsaciones << endl;
	} if (sexo == "femenino"){
		n_pulsaciones = (220 - edad)/10;
		cout << "Su numero de pulsaciones por cada 10 segundos de ejercicio aerobico es: " << n_pulsaciones << endl;
	} else {
		cout << "Sexo no identificado.";
	}
	return 0;
}
