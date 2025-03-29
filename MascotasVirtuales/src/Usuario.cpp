//
//

#include "Usuario.h"
#include<iostream>
#include <memory>

Usuario::Usuario(const string& U) :
    nombre(U) {
}

std::map<int, std::shared_ptr<Mascota>> Usuario::getMascotas() const {
    return mascotas;
}



// Getters
string Usuario::getUsuario() const {
    return nombre;
}

// Setter
void Usuario::setUsuario(const string& U) {
    this->nombre = U;
}

// Metodo
void Usuario::adoptarMascota(std::shared_ptr<Mascota> mascota) {
    mascotas[mascota->getId()] = mascota;
    std::cout << nombre << "\n:) Acabas de adopatar a: " << mascota->getNombre() << std::endl;
}


void Usuario::mostrarMascotas() const {
    std::cout << "\nLas mascotas de " << nombre << " son:" << std::endl;
    for (const auto& pair : mascotas) {
        std::cout << "Su ID es: " << pair.first << " y su nombre es: " << pair.second->getNombre() << std::endl;
    }
}


