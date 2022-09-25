//
// Created by NICOL on 19/9/2022.
//

#include "Presupuesto.h"

Presupuesto::Presupuesto(int numero, Fecha fechaEmision,Fecha fechaVenc,Cliente cliente1,Producto producto1,int cantidad): fechaEmision(fechaEmision),
                                                                                                      fechaVencimiento(fechaVenc), cliente(cliente1),
                                                                                                      producto1(producto1) {

    this->numero = numero;
    this->cantidadProducto = cantidad;
    Presupuesto::setTotal();
}
Presupuesto::~Presupuesto() {}

void Presupuesto::mostrarCliente() {
    this->cliente.mostrar();

}

float Presupuesto::getTotal() {

    this->total = this->producto1.getPrecio() * this->cantidadProducto;

    return this->total;

}