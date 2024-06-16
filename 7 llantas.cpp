#include <iostream>
using namespace std;

int main (){
	
	int llantas, p_unidad, p_total;
	cout << "Indique el numero de llantas que llevara: ";
	cin >> llantas;
	if (llantas < 5){
		p_unidad = 300;
		p_total = p_unidad * llantas;
		cout << "El precio por llanta es de: " << p_unidad << endl;
		cout << "El precio total a pagar es: " << p_total << endl;
	} else if (llantas <= 10){
		p_unidad = 250;
		p_total = p_unidad * llantas;
		cout << "El precio por llanta es de: " << p_unidad << endl;
		cout << "El precio total a pagar es: " << p_total << endl;
	} else {
		p_unidad = 200;
		p_total = p_unidad * llantas;
		cout << "El precio por llanta es de: " << p_unidad << endl;
		cout << "El precio total a pagar es: " << p_total << endl;
	}
	
	return 0;
}
