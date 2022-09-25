//
// Created by NICOLAS on 19/9/2022.
//

#ifndef PRUEBAS_PRESUPUESTO_H
#define PRUEBAS_PRESUPUESTO_H
#include "Fecha.h"
#include "Cliente.h"
#include "Producto.h"

class Presupuesto {
private:
    int numero;
    Fecha fechaEmision;
    Fecha fechaVencimiento;
    Cliente cliente;
    Producto producto1;
    int cantidadProducto;
    float total;
public:
    Presupuesto(int numero, Fecha fechaEmision,Fecha fechaVenc, Cliente cliente1, Producto producto1,int cantidad);
    ~Presupuesto();
    int getDia();
    int getMes();
    int getAnio();
    void mostrarCliente();
    float setTotal();
    float getTotal();



};
inline int Presupuesto::getDia() {
    return this->fechaVencimiento.getDia();
}
inline int Presupuesto::getMes() {
    return this->fechaVencimiento.getMes();
}
inline int Presupuesto::getAnio() {
    return this->fechaVencimiento.getAnio();
}
inline float Presupuesto::setTotal() {
    this->total = this->producto1.getPrecio() * this->cantidadProducto;

}



#endif