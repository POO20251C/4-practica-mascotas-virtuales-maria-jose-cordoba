//
//
#ifndef USUARIO_H
#define USUARIO_H

#include <string>
#include <map>
#include <memory>
#include "Mascota.h"
#include "Objeto.h"

using namespace std;

class Usuario {
private:
    string nombre; // queria poner usuario pero me perdi:( asi q de neuvo es nombre perdon
    std::map<int, std::shared_ptr<Mascota>> mascotas;
    std::map<int, std::vector<std::shared_ptr<Objeto>>> objetosPorMascota;

public:
    // Constructor
    Usuario(const string& nombre);

    // Getters
    string getUsuario() const;
    std::map<int, std::shared_ptr<Mascota>> getMascotas() const;

    // Setters
    void setUsuario(const string& U);

    //metodos
    void adoptarMascota(std::shared_ptr<Mascota> mascota);
    void mostrarMascotas() const;
};

#endif // USUARIO_H
