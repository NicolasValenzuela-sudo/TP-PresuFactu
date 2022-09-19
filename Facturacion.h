//
// Created by NICOLAS on 18/9/2022.
//

#ifndef TEMPLATECPP_FACTURACION_H
#define TEMPLATECPP_FACTURACION_H
#include "Fecha.h"
#include "Cliente.h"
#include "Producto.h"
#include <iostream>

class Facturacion {

    private:
    int numero;
    Fecha fecha;
    Cliente cliente;
    Producto producto;
    int cantidad;
    float total;

public:
    Facturacion(int, Fecha, Cliente, Producto, int);
    ~Facturacion();
    int getNumero();
    Fecha getFecha();
    Cliente getCliente();
    Producto getProducto();

};

#endif //TEMPLATECPP_FACTURACION_H
