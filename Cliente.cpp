//
// Created by NICOL on 19/9/2022.
//

#include "Cliente.h"

Cliente::Cliente(int dni, string nombre, string apellido) {
    this->dni = dni;
    this->nombre = nombre;
    this->apellido = apellido;

}
Cliente::~Cliente() {}

void Cliente::mostrar() {

    cout << "DNI: " << this->dni << endl;
    cout << "Nombre: " << this->nombre << endl;
    cout << "Apellido: " << this->apellido << endl;

}
