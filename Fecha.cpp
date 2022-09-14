//
// Created by NICOLAS on 13/9/2022.
//

#include "Fecha.h"
#include <iostream>

using namespace std;
Fecha::Fecha(int dd, int mm, int aa) {
    this->dd = dd;
    this->mm = mm;
    this->aa = aa;
}

Fecha::~Fecha() {}


void Fecha::mostrar() {
    cout << this->dd << "/" << this->mm << "/" << this->aa << endl;
}