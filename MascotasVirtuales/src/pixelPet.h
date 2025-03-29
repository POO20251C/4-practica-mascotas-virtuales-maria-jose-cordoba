#ifndef PIXEL_PET_H
#define PIXEL_PET_H

#include "Usuario.h"
#include <vector>
#include <iostream>

using namespace std;

class pixelPet {
private:
    vector<Usuario> usuarios;

public:

    pixelPet();
    pixelPet(vector<Usuario> usuarios);

    // Métodos
    void registrarUsuario(const Usuario& usuario);
    Usuario* buscarUsuario(const string& nombre);
    void mostrarUsuariosRegistrados() const;
};
#endif // PIXEL_PET_H