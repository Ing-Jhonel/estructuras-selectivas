#include <iostream>
using namespace std;
// Determinar si un alumno aprueba o reprueba un curso, sabiendo que aprobara si su
// promedio de tres calificaciones es mayor o igual a 70; reprueba en caso contrario.
// ENTRADA|| calificacion1: primer calificacion calificacion2: segunda calificacion calificacion3: tercera calificacion
// SALIDA|| "Aprobado" "Reprobado"

int main (){
	
	float calificacion1, calificacion2, calificacion3, promediodecalificaciones123;
	cout << "Introduce la primera calificacion: ";
	cin >> calificacion1;
	cout << "Introduce la segunda calificacion: ";
	cin >> calificacion2;
	cout << "Introduce la tercera calificacion: ";
	cin >> calificacion3;
	promediodecalificaciones123 = (calificacion1+calificacion2+calificacion3)/3;
	if (promediodecalificaciones123 >= 70){
		cout << "Aprobado.";
	} else {
		cout << "Reprobado.";
	}
	return 0;
}
