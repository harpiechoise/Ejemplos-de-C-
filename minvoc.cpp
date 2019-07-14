#include<iostream>

using namespace std;

int main(){
    char letra;
    cout << "Digite un caracter: "; cin >> letra;

    switch(letra){
        case 'a': 
        case 'e':
        case 'i':
        case 'o':
        case 'u': cout << "La vocal es minuscula" << endl; break;
        default: cout << "No es una vocal minuscula" << endl; break;
    }
    return 0;
}