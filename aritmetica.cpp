//Operaciones Aritmeticas

#include<iostream>

using namespace std;

int main() {
    int numeroUno = 0;
    int numeroDos = 0;
    cout << "Escriba un primer numero: " << endl;
    cin >> numeroUno;
    cout << "Escriba un segundo numero: " << endl;
    cin >> numeroDos;
    float division = (float)numeroUno / (float)numeroDos;
    cout << endl << "Suma: " << numeroUno + numeroDos << endl << "Resta: " << numeroUno - numeroDos << endl << "Multiplicacion: " << numeroUno * numeroDos << endl << "Division: " << division  << endl;

    return 0;
}