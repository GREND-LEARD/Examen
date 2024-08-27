#include <iostream>

using namespace std;

int main() {
    int cantidadCamisetas;
    float precioCamiseta, subtotal, descuento = 0.0, totalAPagar;

    cout << "Ingrese la cantidad de camisetas: ";
    cin >> cantidadCamisetas;

    cout << "Ingrese el precio unitario de cada camiseta: ";
    cin >> precioCamiseta;

    subtotal = cantidadCamisetas * precioCamiseta;

    if (cantidadCamisetas >= 1 && cantidadCamisetas <= 10) {
        descuento = 0.05;  
    } else if (cantidadCamisetas >= 11 && cantidadCamisetas <= 16) {
        descuento = 0.10;  
    } else if (cantidadCamisetas > 16) {
        descuento = 0.25;  
    }

    float montoDescuento = subtotal * descuento;
    totalAPagar = subtotal - montoDescuento;


    cout << "Subtotal de la compra: " << subtotal << " pesos." << endl;
    cout << "Valor del descuento: " << montoDescuento << " pesos." << endl;
    cout << "Total a pagar: " << totalAPagar << " pesos." << endl;

    return 0;
}
