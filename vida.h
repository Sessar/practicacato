#pragma once

#include <iostream>
#include <string>
#include "fecha.h"
#include "fecha.cpp"
using namespace std;

class vida
{
private:
    string *recuerdos;
    int tiempo;
    fecha fechainicio;
    int nrorecuerdos;
    fecha fechafin;
    int nroconocidos;
    float cantdinero;

public:
    void nacimiento();
    void muerte();
    void experiencias();
    void conocer();
    void ganardinero();
    void perderdinero();
    void calculartiempo(fecha f);
};