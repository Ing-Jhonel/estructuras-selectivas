#include <iostream>
using namespace std;
// En una llantera se ha establecido una promoción de las llantas marca “Ponchadas”, dicha
// promoción consiste en lo siguiente:
// Si se compran menos de cinco llantas el precio es de $300 cada una, de $250 si se
// compran de cinco a 10 y de $200 si se compran más de 10.
// Obtener la cantidad de dinero que una persona tiene que pagar por cada una de las
// llantas que compra y la que tiene que pagar por el total de la compra.
//ENTRADA|| llantas: cantidad de llantas
//SALIDA|| p_total: precio total

int main (){
	
	int llantas, p_unidad, p_total;
	cout << "Indique el numero de llantas que llevara: ";
	cin >> llantas;
	if (llantas < 5){
		p_unidad = 300;
	} else if (llantas <= 10){
		p_unidad = 250;
		p_total = p_unidad * llantas;
	} else {
		p_unidad = 200;
	}
	p_total = p_unidad * llantas;
	cout << "El precio por llanta es de: " << p_unidad << endl;
	cout << "El precio total a pagar es: " << p_total << endl;
	return 0;
}
