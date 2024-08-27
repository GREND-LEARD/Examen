#include <iostream>
#include <string>

using namespace std;

int main() {
    string nombre;
    float practica, problemas, teorico, calificacionFinal;

    cout << "Ingrese el nombre del alumno: ";
    getline(cin, nombre);

    cout << "Ingrese la nota de práctica 10%: ";
    cin >> practica;
    
    if (practica < 1.0 || practica > 10.0) {
        cout << "Error: La nota debe estar entre 1 y 10." << endl;
        return 1;
    }

    cout << "Ingrese la nota de problemas 50%: ";
    cin >> problemas;
    if (problemas < 1.0 || problemas > 10.0) {
        cout << "Error: La nota debe estar entre 1 y 10." << endl;
        return 1;
    }

    cout << "Ingrese la nota de teórico 40%: ";
    cin >> teorico;
    if (teorico < 1.0 || teorico > 10.0) {
        cout << "Error: La nota debe estar entre 1 y 10." << endl;
        return 1;
    }

    calificacionFinal = (practica * 0.10) + (problemas * 0.50) + (teorico * 0.40);


    cout << "El alumno " << nombre << " tiene una calificación final de: " << calificacionFinal << endl;

    return 0;
}
