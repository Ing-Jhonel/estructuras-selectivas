#include <iostream>
using namespace std;

int main (){
	
	double camisas, valor_compra, valor_final, descuento;
	cout << "¿Cuantas camisas va a llevar?: ";
	cin >> camisas;
	cout << "Introduzca el valor de la compra: ";
	cin >> valor_compra;
	if (camisas >= 3){
		descuento = valor_compra*0.2;
		valor_final = valor_compra - descuento;
		cout << "El valor final de su compra es: " << valor_final << endl;
	} else {
		descuento = valor_compra*0.1;
		valor_final = valor_compra - descuento;
		cout << "El valor final de su compra es: " << valor_final << endl;
	}

	cout << "¡¡GRACIAS POR SU COMPRA!!" << endl;
	
	return 0;
}
