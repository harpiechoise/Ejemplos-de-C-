/* Realice un programa que lea la entrada y salida de los siguientes deatos de una persona
    Edad: dato de tipo entero
    Sexo: dato de tipo caracter
    Altura en metros: dato de tipo real

Tras leer los datos el programa deberia mostrarlos en la salida standar
*/

#include<iostream>
using namespace std;

int main() {
    int edad;
    char sexo[10];
    float altura;
    cout << "Ingrese su edad: ";
    cin >> edad;
    cout << "Ingrese su genero [H/M] ";
    cin >> sexo;
    cout << "Ingrese su altura (en metros) ";
    cin >> altura;
    cout << "Edad: " << edad << "Años" << endl;
    cout << "Genero: " << sexo << endl;
    cout << "Altura: " << altura << "Metros" << endl;
    return 0;
}