#include <iostream>
using namespace std;
// Calcular el total a pagar por la compra de camisas. Si se compran tres camisas o más se aplica un descuento del }
// 20% sobre el total de la compra y si son menos de tres camisas un descuento del 10%
// ENTRADA|| camisas: numero de camisas a llevar  valor_compra: valor de la compra original
// SALIDA|| valor_final: valor final a pagar despues del descuento

int main (){
	
	double camisas, valor_compra=0, valor_final, descuento, porcentaje, costocamisa;
	string respuesta;
	cout << "Indique cuantas camisas va a llevar: ";
	cin >> camisas;
	cout << endl;
	cout << "¿Las " << camisas << " camisas cuestan lo mismo?(si/no): "; 
	cin >> respuesta;
	cout << endl;
	while (respuesta != "si" && respuesta != "no"){
			cout << "No valido. Indique si o no. " << endl;
			cout << "¿Las " << camisas << " camisas cuestan lo mismo?(si/no): "; 
			cin >> respuesta;
			cout << endl;
	}
	if(respuesta == "si"){
		cout << "Indique el costo de una camisa: ";
		cin >> costocamisa;
		valor_compra = costocamisa*camisas;
	} else {
		cout << "Indique el costo de cada camisa: " << endl << endl;
		for(int i=1; i<= camisas; i++){
			cout << i << ". Camisa: ";
			cin >> costocamisa;
			valor_compra = valor_compra + costocamisa;
		}
	} 
	cout << endl;
	cout << "El valor inicial de todo es: " << valor_compra << endl;
	if (camisas >= 3){
		porcentaje = 0.2;
	} else {
		porcentaje = 0.1;
	}
	descuento = valor_compra*porcentaje;
	cout << endl;
	cout << "--------- ¡¡SE LE APLICO UN DESCUENTO DE " << porcentaje*100 << "%!! ---------" << endl << endl;
	valor_final = valor_compra - descuento;
	cout << "El valor final de su compra es: " << valor_final << endl << endl;
	cout << "-------------- ¡¡GRACIAS POR SU COMPRA!! ---------------" << endl;
	return 0;
}
