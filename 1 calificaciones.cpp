#include <iostream>
using namespace std;
// Determinar si un alumno aprueba o reprueba un curso, sabiendo que aprobara si su
// promedio de tres calificaciones es mayor o igual a 70; reprueba en caso contrario.
// ENTRADA|| calificacion1: primer calificacion calificacion2: segunda calificacion calificacion3: tercera calificacion
// SALIDA|| "Aprobado" "Reprobado"

int main (){
	
	float calificacion1, calificacion2, calificacion3, promediodecalificaciones123;
	cout << "AVERIGUA SI ESTAS APROBADO O DESAPROBADO" << endl << endl;
	cout << "Introduce la primera calificacion: ";
	cin >> calificacion1;
	while(calificacion1<0 ){
		cout << endl;
		cout << "No valido. Intente de nuevo." << endl;
		cout << "Introduce la primera calificacion: ";
		cin >> calificacion1;
		cout << endl;
	}
	cout << "Introduce la segunda calificacion: ";
	cin >> calificacion2;
	while(calificacion2<0 ){
		cout << endl;
		cout << "No valido. Intente de nuevo."<< endl;
		cout << "Introduce la segunda calificacion: ";
		cin >> calificacion2;
		cout << endl;
	}
	cout << "Introduce la tercera calificacion: ";
	cin >> calificacion3;
	while(calificacion3<0 ){
		cout << endl;
		cout << "No valido. Intente de nuevo." << endl;
		cout << "Introduce la tercera calificacion: ";
		cin >> calificacion3;
		cout << endl;
	}
	promediodecalificaciones123 = (calificacion1+calificacion2+calificacion3)/3;
	string estatus;
	cout << endl;
	if (promediodecalificaciones123 >= 70){
		estatus = "aprobado.";
	} else {
		estatus = "reprobado.";
	}
	cout << "Usted esta " << estatus << endl;
	return 0;
}
