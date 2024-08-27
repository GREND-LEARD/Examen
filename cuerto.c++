// ALAS 30% temporales alta
// VOLAR 20% temporal 
// 50% si el pasajero es menor de edad
// Volar tiene recargo de 10 mayores de 60 años
// EStudiante viajan ALAS tienen descuento de 10% temporada baja

#include <iostream>
#include <string>

using namespace std;

int main() {
    string nombre, temporada, tipoPasajero, compania;
    float tarifaBasica, precioFinal;
    int edad;

    cout << "Ingrese el nombre del pasajero: ";
    getline(cin, nombre);

    cout << "Ingrese la tarifa básica del pasaje: ";
    cin >> tarifaBasica;

    cout << "Ingrese la edad del pasajero: ";
    cin >> edad;

    cout << "Ingrese la temporada (alta/baja): ";
    cin >> temporada;

    cout << "Ingrese el tipo de pasajero (estudiante/particular): ";
    cin >> tipoPasajero;

    cout << "Ingrese la compañía aérea (ALAS/VOLAR): ";
    cin >> compania;

    precioFinal = tarifaBasica;


    if (temporada == "alta") {
        if (compania == "ALAS") {
            precioFinal *= 1.30; 
        } else if (compania == "VOLAR") {
            precioFinal *= 1.20;  
        }
    }

    
    if (edad < 18) {
        precioFinal *= 0.50;  
    } else if (edad > 60 && compania == "VOLAR") {
        precioFinal += 10000;  
    }

    
    if (tipoPasajero == "estudiante" && compania == "ALAS" && edad >= 18 && temporada == "baja") {
        precioFinal *= 0.90;  
    }

    cout << "El pasajero " << nombre << " debe pagar: " << precioFinal << " pesos." << endl;

    return 0;
}
