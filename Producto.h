//
// Created by NICOLAS on 18/9/2022.
//

#ifndef TEMPLATECPP_PRODUCTO_H
#define TEMPLATECPP_PRODUCTO_H
#include <iostream>

using namespace std;

class Producto {

    private:
    int codigo;
    string descripcion;
    float precio;
    public:
    Producto(int codigo, string descripcion, float precio);
    ~Producto();
    int getCodigo();
    string getDescripcion();
    float getPrecio();

};
inline int Producto::getCodigo() {
    return codigo;
}

inline string Producto::getDescripcion() {
    return descripcion;
}

inline float Producto::getPrecio() {
    return precio;
}

#endif //TEMPLATECPP_PRODUCTO_H
