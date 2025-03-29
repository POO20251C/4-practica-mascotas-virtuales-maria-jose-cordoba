//
//
#include<iostream>
#include "Mascota.h"
#include"Cuidado.h"
#include"Habilidad.h"
#include"Objeto.h"

const int Mascota::ExperienciaNecesaria[4] = {1, 2, 4, 8};

Mascota::Mascota()//no sabia pero al parecer toca agregar esot cuando tienes el shared-recordar!!
    : nombre(""), edad(0), estadoSalud(""), estadoEmocional(""), nivelEnergia(0), experiencia(0), id(0), nivelEvolucion("cinta blanca") {

}

Mascota::Mascota(const string& n, int e, const string& S, const string& E, int N, int X, int id, const string& Ev) {
    this->nombre=n;
    this->edad=e;
    this->estadoSalud=S;
    this->estadoEmocional=E;
    this->nivelEnergia=N;
    this->experiencia=X;
    this->id=id;
    this->nivelEvolucion="cinta blanca"; //la verdad hare los niveles tipo cintas de karate porq no se como mas llamarlos perdon

}

//getters
string Mascota::getNombre()const {
    return nombre;
}
int Mascota::getEdad()const {
    return edad;
}
string Mascota::getEstadoSalud() const{
    return estadoSalud;
}
string Mascota::getEstadoEmocional() const{
    return estadoEmocional;
}
int Mascota::getNivelEnergia()const {
    return nivelEnergia;
}
int Mascota::getExperiencia()const {
    return experiencia;
}
int Mascota::getId() const{
    return id;
}

//Setters
void Mascota::setNombre(const string& n) {
    this->nombre=n;
}
void Mascota::setEdad(int e) {
    this->edad=e;
}
void Mascota::setEstadoSalud(const string& S) {
    this->estadoSalud=S;
}
void Mascota::setEstadoEmocional(const string& E) {
    this->estadoEmocional=E;
}
void Mascota::setNivelEnergia(int N) {
    this->nivelEnergia=N;
}
void Mascota::setExperiencia(int X) {
    this->experiencia=X;
}

void Mascota::setId(int id) {
    this->id=id;
}

//metodos

void Mascota::aumentarEdad(int nuevaEdad) {
    if (nuevaEdad == edad +1) {
        edad = nuevaEdad;
        cout << "La mascota creció:) ahora tiene " << edad << " años" << endl;
    } else {
        cout<<"Tu mascota aun no ha crecido, sigue cuidandola y crecera!:)"<<endl;
    }
}
void Mascota::registrarEstadoSalud(const string& estadoSalud) {
    this->estadoSalud=estadoSalud;
}
void Mascota::verHistorialCuidados() const {
    cout << "Historial de cuidados de tu mascota: " << nombre << endl;
    for (Cuidado* c : historialCuidados) {
        cout << c->getNombre() << " - " << c->getFecha() << endl;
    }
}
void Mascota::registrarEstadoEmocional(const string& nuevoEstado) {
    this->estadoEmocional=nuevoEstado;

}
void Mascota::registrarCuidado(Cuidado *nuevoCuidado) {
    historialCuidados.push_back(nuevoCuidado);
    cout<<nombre<<"Acaba de recibir un nuevo cuidado!:"<<nuevoCuidado->getNombre()<<endl;
}
void Mascota::registrarNivelEnergia(int nuevoNivelEnergia) {
    this->nivelEnergia=nuevoNivelEnergia;
}
void Mascota::mejorarExperiencia(int puntos) {
    experiencia += puntos;
    cout<<"tu"<<nombre<<" ha ganado:"<<puntos<<"puntos de experiencia:) yei, ahora tiene:"<<experiencia<<endl;
}

void Mascota::agregarHabilidad(Habilidad* nuevaHabilidad) {
    habilidades.push_back(nuevaHabilidad);
    cout << "Nueva habilidad aprendida: " << nuevaHabilidad->getNombre() << endl;
}
void Mascota::registrarObjeto(Objeto *nuevoObjeto) {
    objetos.push_back(nuevoObjeto);
    cout<<"El nuevo objeto adquirido es:"<<nuevoObjeto->getNombre()<<endl;

}
void Mascota::usarObjeto(Objeto* objeto) {
    cout<<"Tu mascota uso:"<<objeto->getNombre()<<endl;

    auto *nuevoCuidado = new Cuidado("nombre", "fecha", "salud antes", "salud después", "emocional antes",
                                     "emocional después");
    nuevoCuidado->setEstadoSaludAntes(estadoSalud);
    nuevoCuidado->setEstadoEmocionalAntes(estadoEmocional);
    nuevoCuidado->agregarObjeto(objeto);
    nuevoCuidado->calcularSalud();

    estadoSalud=nuevoCuidado->getEstadoSaludD();
    estadoEmocional=nuevoCuidado->getEstadoEmocionalD();

    historialCuidados.push_back(nuevoCuidado);

    cout<<"la salud de:"<<nombre<<"ahora es:"<<estadoSalud<<endl;
    cout<<nombre<<"se ha sentido:"<<estadoEmocional<<endl;
    }
void Mascota::usarHabilidad(Habilidad* habilidad) {
    if (experiencia>=habilidad->getExperienciaRequerida()) {
        cout<<nombre<<"uso la habildiad:"<<habilidad->getNombre()<<endl;
    } else {
        cout<<nombre<<"necesita mas experiencia para:"<<habilidad->getNombre()<<"experiencia requerida es:"<<habilidad->getExperienciaRequerida()<<endl;
    }

}

string Mascota::getNivelEvolucion() const {
    if (experiencia >= 80) return "cinta negra";
    if (experiencia >= 50) return "cinta marron";
    if (experiencia >= 20) return "cinta azul";
    if (experiencia >= 10) return "cinta naranja";
    return "cinta blanca";
}


void Mascota::verificarEvolucion() {
    string nuevoNivel=getNivelEvolucion();
    if (nuevoNivel != nivelEvolucion) {
        cout<<nombre<<"Ha evolucionadoo!! Ahora es:"<<nuevoNivel<<endl;
        nivelEvolucion=nuevoNivel;
    }
}




















