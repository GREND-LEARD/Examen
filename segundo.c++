#include <iostream>

using namespace std;

int main() {
    float consumoBasico, totalAPagar;

    // Leer el consumo básico del cliente
    cout << "Ingrese el consumo básico: ";
    cin >> consumoBasico;

    // Aplicar descuento si corresponde
    if (consumoBasico > 50000) {
        totalAPagar = consumoBasico * 0.95; 
    } else {
        totalAPagar = consumoBasico; 
    }

    if (consumoBasico > 100000) {
        totalAPagar = totalAPagar * 0.90;
    }

    if (consumoBasico > 150000) {
        totalAPagar = totalAPagar * 0.85;
    }

    // Calcular IVA
    float iva = totalAPagar * 0.19;

    // Mostrar el descuento, IVA y total a pagar
    float descuento = consumoBasico - totalAPagar;
    cout << "El descuento aplicado es: " << descuento << " pesos." << endl;
    cout << "El IVA es: " << iva << " pesos." << endl;
    cout << "El total a pagar es: " << totalAPagar + iva << " pesos." << endl;

    return 0;
}