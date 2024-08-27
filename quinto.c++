#include <iostream>

using namespace std;

int main() {
    int estrato;
    float cargoFijo = 15000.0, porcentaje = 0.0, totalAFacturar;

    cout << "Ingrese el estrato en el que vive (1 a 6): ";
    cin >> estrato;

    if (estrato == 1 || estrato == 2) {
        porcentaje = 0.10; 
    } else if (estrato == 3 || estrato == 4) {
        porcentaje = 0.15; 
    } else if (estrato == 5 || estrato == 6) {
        porcentaje = 0.20;  
    } else {
        cout << "Estrato no válido. Ingrese un número entre 1 y 6." << endl;
        return 1; 
    }

    totalAFacturar = cargoFijo + (cargoFijo * porcentaje);

    cout << "El porcentaje aplicado es: " << (porcentaje * 100) << "%" << endl;
    cout << "El monto total a facturar es: " << totalAFacturar << " pesos." << endl;

    return 0;
}
