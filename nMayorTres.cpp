#include <iostream>

using namespace std;

int main(){
    int a, b, c;
    cout << "Digite 3 numeros: "; cin >> a >> b >> c;
    if (a > b && a > c){
        cout << "A es el mayor" << endl;
    }else if (b > a && b > c){
        cout << "B es el mayor" << endl;
    }else if (c > a && c > b){
        cout << "C es el mayor" << endl;
    }else {
        cout << "Los 3 son iguales" << endl;
    }
    return 0;
}