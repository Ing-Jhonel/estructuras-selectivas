#include <iostream>
using namespace std;
// Leer 3 números q, r y s. Determine si q es multiplo de r y s.
//ENTRADA|| q: primer numero  r: segundo numero  s: tercer numero 
//SALIDA|| q,"si es multilo de ",r ," y ", s        q,"no es multilo de ",r ," y ", s

int main (){
	
	int q, r, s;
	cout << "Ingrese el primer numero (q): ";
	cin >> q;
	cout << "Ingrese el segundo numero (r): ";
	cin >> r;
	cout << "Ingrese el tercer numero (s): ";
	cin >> s;
	int aux;
	if (q % r == 0){
		if (q % s == 0){
			aux=1;
		} else{
			aux=0;
		}
	} else {
		aux=0;
	}
	cout << endl;
	cout << "----------------------------------------------" << endl << endl;
	if(aux==1){
		cout << q << " si es multiplo de " << r << " y " << s << endl;	
	}else{
		cout << q << " no es multiplo de " << r << " y " << s << endl;
	}
	return 0;
}
