//
// Created by NICOL on 19/9/2022.
//

#include "Presupuesto.h"

Presupuesto::Presupuesto(int numero, Fecha fechaEmision,Fecha fechaVenc,Cliente cliente1, int total): fechaEmision(fechaEmision),
                                                                                                      fechaVencimiento(fechaVenc), cliente(cliente1) {

    this->numero = numero;
    this->total = total;

}
Presupuesto::~Presupuesto() {}

void Presupuesto::mostrarCliente() {
    this->cliente.mostrar();

}
