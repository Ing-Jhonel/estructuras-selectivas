#include <iostream>
using namespace std;

int main (){
	
	double n1, n2, n3;
	cout << "A continuacion escribiras tres numeros para que elijamos el mayor: " << endl << endl;
	cout << "Primer numero: ";
	cin >> n1;
	cout << "Segundo numero: ";
	cin >> n2;
	cout << "Tercer numero: ";
	cin >> n3;
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
