#include <iostream>
using namespace std;
  	float num1, num2, resultado;
    char operador;
int main() {
  
    cout << "Ingrese el primer n�mero: ";
    cin >> num1;
    cout << "Ingrese el operador (+, -, *, /): ";
    cin >> operador;
    cout << "Ingrese el segundo n�mero: ";
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
            cout << "Operador inv�lido";
            return 0;
    }
    cout << "El resultado es: " << resultado << endl;
    return 0;
}
