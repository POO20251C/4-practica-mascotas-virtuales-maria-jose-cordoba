//
//

#include "Objeto.h"
Objeto::Objeto(const string& Nombre,const string& ti, const string& Es, int As, int Eg, int Em) {
    nombre=Nombre;
    tipo=ti;
    efectoEspecial=Es;
    aumentoSalud=As;
    aumentoExperiencia=Eg;
    aumentoEmocional=Em;

}

//getters
string Objeto::getNombre() const {
    return nombre;
}
string Objeto::getTipo() const{
    return tipo;
}
string Objeto::getEfectoEspecial() const{
    return efectoEspecial;
}
int  Objeto::getAumentoSalud() const{
    return aumentoSalud;
}
int Objeto::getAumentoExperiencia() const{
    return aumentoExperiencia;
}
int Objeto::getAumentoEmocional()const {
    return aumentoEmocional;
}

//setters
void Objeto::setNombre(const string& Nombre) {
    nombre=Nombre;
}
void Objeto::setTipo(const string& ti) {
    tipo=ti;
}
void Objeto::setEfectoEspecial(const string& Es) {
    efectoEspecial=Es;
}
void Objeto::setAumentoSalud(int As) {
    aumentoSalud=As;
}
void Objeto::setAumentoExperiencia(int Eg) {
    aumentoExperiencia=Eg;
}
void Objeto::setAumentoEmocional(int Em) {
    aumentoEmocional=Em;
}
