//
// Created by NICOLAS on 13/9/2022.
//

#ifndef TEMPLATECPP_CLIENTE_H
#define TEMPLATECPP_CLIENTE_H
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
};




#endif //TEMPLATECPP_CLIENTE_H
