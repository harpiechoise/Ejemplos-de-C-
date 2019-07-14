#include<iostream>

using namespace std;

int main() {
    float c1, c2, h=0;
    cout << "Escriba el valor del cateto 1: "; cin >> c1;
    cout << "Escriba el valor del cateto 2: "; cin >> c2;
    c1 *= c1;
    c2 *= c2;
    h = c1 + c2;
    cout << "El valor de la hipotenusa es: " << h << endl;
    return 0;
}