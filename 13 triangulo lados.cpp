#include <iostream>
using namespace std;
// Dados 3 longitudes diga si pueden formar un triangulo. Recuerde “En todo triangulo, cada
// lado es menor que la suma de los otros dos, pero mayor que su diferencia”
//ENTRADA|| a: lado 1 b: lado 2  c: lado 3
//SALIDA|| "Las longitudes pueden formar un triángulo."  o  "Las longitudes no pueden formar un triángulo."
int main() {
	
    double a, b, c;
    cout << "Ingrese la primera longitud (a): ";
    cin >> a;
    cout << "Ingrese la segunda longitud (b): ";
    cin >> b;
    cout << "Ingrese la tercera longitud (c): ";
    cin >> c;
    if ((a < b + c && a > (b - c)) && (b < a + c && b > (a - c)) && (c < a + b && c > (a - b))){
        cout << "Las longitudes pueden formar un triángulo." << endl;
    } else {
        cout << "Las longitudes no pueden formar un triángulo." << endl;
    }

    return 0;
}

