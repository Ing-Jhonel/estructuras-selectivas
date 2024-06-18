#include <iostream>
using namespace std;

int main (){
	
	int q, r, s;
	cout << "Ingrese el primer numero (q): ";
	cin >> q;
	cout << "Ingrese el segundo numero (r): ";
	cin >> r;
	cout << "Ingrese el tercer numero (s): ";
	cin >> s;
	if (q % r == 0){
		if (q % s == 0){
			cout << q << " si es multiplo de " << r << " y " << s << endl;
		} else{
			cout << q << " no es multiplo de " << r << " y " << s << endl;
		}
	} else {
		cout << q << " no es multiplo de " << r << " y " << s << endl;
	}
	return 0;
}
