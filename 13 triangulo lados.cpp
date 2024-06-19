#include <iostream>

using namespace std;

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

