#include <iostream>
using namespace std;
// Calcular el mayor valor de 3 números

//ENTRADA: n1: primer numero n2: segundo numero n3: tercer numero
//SALIDA|| n1, n2 o n3: mayor numero

int main (){
	
	double n1, n2, n3;
	cout << "A continuacion escribiras tres numeros para que elijamos el mayor: " << endl << endl;
	cout << "Primer numero: ";
	cin >> n1;
	cout << "Segundo numero: ";
	cin >> n2;
	cout << "Tercer numero: ";
	cin >> n3;
	cout << endl;
	if (n1 > n2){
		  if (n1 > n3){
			cout << "El mayor numero es: " << n1 << endl;
		} else {
			cout << "El mayor numero es: " << n3 << endl;
		} 
	} else {
		if (n2 > n3){
			cout << "El mayor numero es: " << n2 << endl;
		} else {
			cout << "El mayor numero es: " << n3 << endl;
		}
	}
	
	return 0;
}
