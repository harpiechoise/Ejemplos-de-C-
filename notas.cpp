#include<iostream>

using namespace std;

int main() {
    float practica, teorica, participacion, nota_final = 0;
    cout << "Digite la nota de practica: "; cin >> practica;
    cout << "Digite la nota teorica: "; cin >> teorica;
    cout << "Digite la nota de parcipacion: "; cin >> participacion;

    practica *= 0.30;
    teorica *= 0.60;
    participacion *= 0.10;

    nota_final = practica + teorica + participacion;
    
    cout << "La nota final es: " << nota_final << endl;
    return 0;
}