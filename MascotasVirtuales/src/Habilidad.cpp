//
// Created by majo on 27/03/2025.
//

#include "Habilidad.h"
Habilidad::Habilidad(const string&  n, int R) {
    nombre=n;
    experienciaRequerida=R;

}

//getters
string Habilidad::getNombre() const {
    return nombre;
}
int Habilidad::getExperienciaRequerida() const {
    return experienciaRequerida;
}
//setters
void Habilidad::setNombre(const string&  n) {
    this->nombre=n;
}
void Habilidad::setExperienciaRequerida(int R) {
    this->experienciaRequerida=R;
}

