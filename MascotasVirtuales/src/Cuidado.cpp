//
//

#include "Cuidado.h"

#include <iostream>
#include <ostream>

std::vector<Cuidado*> Cuidado::historialCuidados;

Cuidado::Cuidado(const std::string& nombre, const std::string& fecha,
        const std::string& estadoSaludAntes, const std::string& estadoSaludD,
        const std::string& estadoEmocionalAntes, const std::string& estadoEmocionalD) {

    this->nombre = nombre;
    this->fecha = fecha;
    this->estadoSaludAntes = estadoSaludAntes;
    this->estadoSaludD = estadoSaludD;
    this->estadoEmocionalAntes = estadoEmocionalAntes;
    this->estadoEmocionalD = estadoEmocionalD;
}

// Getters
std::string Cuidado::getNombre() const {
    return nombre;
}

std::string Cuidado::getFecha() const {
    return fecha;
}

std::string Cuidado::getEstadoSaludAntes() const {
    return estadoSaludAntes;
}

std::string Cuidado::getEstadoSaludD() const {
    return estadoSaludD;
}

std::string Cuidado::getEstadoEmocionalAntes() const {
    return estadoEmocionalAntes;
}

std::string Cuidado::getEstadoEmocionalD() const {
    return estadoEmocionalD;
}
std::vector<Objeto*> Cuidado::getObjetos() const {
    return objetos;
}

// Setters
void Cuidado::setNombre(const std::string& nombre) {
    this->nombre = nombre;
}

void Cuidado::setFecha(const std::string& fecha) {
    this->fecha = fecha;
}

void Cuidado::setEstadoSaludAntes(const std::string& estadoSaludAntes) {
    this->estadoSaludAntes = estadoSaludAntes;
}

void Cuidado::setEstadoSaludD(const std::string& estadoSaludD) {
    this->estadoSaludD = estadoSaludD;
}

void Cuidado::setEstadoEmocionalAntes(const std::string& estadoEmocionalAntes) {
    this->estadoEmocionalAntes = estadoEmocionalAntes;
}

void Cuidado::setEstadoEmocionalD(const std::string& estadoEmocionalD) {
    this->estadoEmocionalD = estadoEmocionalD;
}

void Cuidado::setObjetos(const std::vector<Objeto*>& objetos) {
    this->objetos = objetos;
}


void Cuidado::agregarObjeto(Objeto* objeto) {
    objetos.push_back(objeto);
}


void Cuidado::mostrarObjetoUsado() const {
    std::cout << "Objetos usados:" << std::endl;
    for (const auto& objeto : objetos) {
        std::cout << "\n- " << objeto->getNombre() << " -- " << objeto->getTipo() << std::endl;
    }
}


void Cuidado::calcularSalud() {
    int totalPuntosSalud = 0;
    for (const auto& objeto : objetos) {
        totalPuntosSalud += objeto->getAumentoSalud();
    }

    if (totalPuntosSalud >= 80) {
        estadoSaludD = "Sano";
        estadoSaludAntes = "Regular";
    } else if (totalPuntosSalud >= 60) {
        estadoSaludD = "Regular";
        estadoSaludAntes = "Enfermo";
    } else if (totalPuntosSalud >= 40) {
        estadoSaludD = "Enfermo";
        estadoSaludAntes = "Muy enfermo";
    } else {
        estadoSaludD = "Muy enfermo";
        estadoSaludAntes = "Muy enfermo";
    }

    std::cout << "Nuevo estado de Salud: " << estadoSaludD << std::endl;
}


void Cuidado::registrarEstadoEmocional() {
    int totalPuntosEmocionales = 0;
    for (const auto& objeto: objetos) {
        totalPuntosEmocionales += objeto->getAumentoEmocional();
    }


    if (totalPuntosEmocionales >= 80) {
        estadoEmocionalD = "FELIZZZ";
        estadoEmocionalAntes = "bien";
    } else if (totalPuntosEmocionales >= 60) {
        estadoEmocionalD = "bien";
        estadoEmocionalAntes = "meh .-.";

    }else if (totalPuntosEmocionales>=40) {
        estadoEmocionalD="meh .-.";
        estadoEmocionalAntes="triste";
    }else {
        estadoEmocionalD="triste";
        estadoEmocionalAntes="casi muriendo de tristeza";
    }

    std::cout<<"Me siento:"<<estadoEmocionalD<<endl;
}

void Cuidado::verHisotrialCuidados() {
    std::cout<<"Historial de cuidados:"<<std::endl;
    for (const auto& cuidado: historialCuidados) {
        std::cout<<"\nCuidado realizado:"<<cuidado->getNombre()<<"\nfecha"<<cuidado->getFecha()<<endl;
        std::cout<<"Estado de salud antes:"<<cuidado->getEstadoSaludAntes()<<"\nEstado ed salud despues:"<<cuidado->getEstadoSaludD()<<std::endl;
        std::cout<<"Estado emocional antes:"<<cuidado->getEstadoEmocionalAntes()<<"Estado emocional despues:"<<cuidado->getEstadoEmocionalD()<<endl;

        cuidado->mostrarObjetoUsado();
    }
}


