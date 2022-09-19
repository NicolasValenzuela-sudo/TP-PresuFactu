//
// Created by NICOLAS on 13/9/2022.
//

#ifndef TEMPLATECPP_PRESUPUESTO_H
#define TEMPLATECPP_PRESUPUESTO_H
#include "Fecha.h"
#include "Cliente.h"
#include "Producto.h"
#include <iostream>

using namespace std;
class Presupuesto {

private:
        int numeroPresupuesto;
        Fecha fechaVencimiento;
        Fecha fechaEmision;
        Cliente cliente;
        float porcentaje;
        Producto producto;
        float totalPresupuesto;


public:

    Presupuesto(int, Fecha, Fecha, Cliente, float,Producto);
    ~Presupuesto();
    Fecha getFechaVencimiento();
    void setTotalPresu();
    int getPrecioProducto();
    string getDescripcionProducto();



};
inline Fecha Presupuesto::getFechaVencimiento() {
        return fechaVencimiento;
}


#endif //TEMPLATECPP_PRESUPUESTO_H
