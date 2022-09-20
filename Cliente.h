//
// Created by NICOLAS on 19/9/2022.
//

#ifndef PRUEBAS_CLIENTE_H
#define PRUEBAS_CLIENTE_H
#include <iostream>
using namespace std;

class Cliente {

private:
    int dni;
    string nombre;
    string apellido;
public:
    Cliente(int dni, string nombre, string apellido);
    ~Cliente();
    void mostrar();
};

#endif//TEMPLATECPP_CLIENTE_H
