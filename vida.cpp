#include <iostream>
#include <string>
#include "vida.h"
using namespace std;

void vida::nacimiento()
{
    cout << "Ingresar fecha de nacimieno: ";
    fechainicio.ingresar();
    recuerdos = new string[100];
    nrorecuerdos = 0;
    nroconocidos = 1;
}
void vida::muerte()
{
    cout << "Ingresar fecha de muerte: ";
    fechafin.ingresar();
    cantdinero;
}

void vida::experiencias()
{
    cout << "Ingrese experiencia: ";
    cin.ignore();
    getline(cin, recuerdos[nrorecuerdos++]);
}
void vida::conocer()
{
    nroconocidos++;
}
void vida::ganardinero()
{
    float cantidad;
    cout << "Ingresa cantidad de dinero que ganas: ";
    cin >> cantidad;
    cantdinero = cantdinero + cantidad;
}
void vida::perderdinero()
{
    float cantidad = 0;
    cout << "Ingresa la cantidad de dinero que perdiste: ";
    cin >> cantidad;
    cantdinero = cantdinero - cantidad;
}
void vida::calculartiempo(fecha f)
{
}