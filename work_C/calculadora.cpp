#include <iostream>
using namespace std;
  	float num1, num2, resultado;
    char operador;
int main() {
  
    cout << "Ingrese el primer número: ";
    cin >> num1;
    cout << "Ingrese el operador (+, -, *, /): ";
    cin >> operador;
    cout << "Ingrese el segundo número: ";
    cin >> num2;
    switch (operador) {
        case '+':
            resultado = num1 + num2;
            break;
        case '-':
            resultado = num1 - num2;
            break;
        case '*':
            resultado = num1 * num2;
            break;
        case '/':
            resultado = num1 / num2;
            break;
        default:
            cout << "Operador inválido";
            return 0;
    }
    cout << "El resultado es: " << resultado << endl;
    return 0;
}
