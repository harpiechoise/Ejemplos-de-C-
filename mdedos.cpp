#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Digite el valor de a: "; cin >> a;
    cout << "Digite el valor de b: "; cin >> b;
    if (a == b){
        cout << "Los dos numeros son iguales" << endl;
    } else if (a > b) {
        cout << "a es mayor que b" << endl;
    } else {
        cout << "b es mayor que a" << endl;
        }
    }
