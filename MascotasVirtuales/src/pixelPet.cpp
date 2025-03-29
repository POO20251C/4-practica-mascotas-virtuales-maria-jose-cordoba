//
//

#include "pixelPet.h"

pixelPet::pixelPet() {

}
pixelPet::pixelPet(vector<Usuario> usuarios) :
    usuarios(usuarios) {

}

// Metodo
void pixelPet::registrarUsuario(const Usuario& usuario) {
    usuarios.push_back(usuario);
    cout << "Usuario registrado exitosamente!!: " << usuario.getUsuario() << endl;
}


Usuario* pixelPet::buscarUsuario(const string& nombre) {
    for (auto& usuario : usuarios) {
        if (usuario.getUsuario() == nombre) {
            return &usuario;
        }
    }
    return nullptr; // Retorna nullptr si --> vacio
}


void pixelPet::mostrarUsuariosRegistrados() const {
    cout << "Usuarios registrados:" << endl;
    for (const auto& usuario : usuarios) {
        cout << "- " << usuario.getUsuario() << endl;
    }
}