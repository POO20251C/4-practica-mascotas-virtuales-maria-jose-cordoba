#include <iostream>
#include <memory>
#include <map>
#include"src/pixelPet.h"
#include "src/Habilidad.h"
#include "src/Objeto.h"
#include "src/Cuidado.h"
#include "src/Mascota.h"
#include "src/Usuario.h"

using namespace std;

int main() {
    // Crear habilidades
    Habilidad H1("bailar", 3);
    Habilidad H2("buscar objetos", 5);
    Habilidad H3("comunicarse con emojis", 8);

    // Mostrar habilidades
    cout << "Habilidad: " << H1.getNombre() << "\nEl nivel requerido para desbloquear esta habilidad es: " << H1.getExperienciaRequerida() << endl;
    cout << "Habilidad: " << H2.getNombre() << "\nEl nivel requerido para desbloquear esta habilidad es: " << H2.getExperienciaRequerida() << endl;
    cout << "Habilidad: " << H3.getNombre() << "\nEl nivel requerido para desbloquear esta habilidad es: " << H3.getExperienciaRequerida() << endl;

    // Crear objetos como shared_ptr
    auto ob1 = std::make_shared<Objeto>("manzana", "snacks", "Energía extra", 4, 1, 5);
    auto ob2 = std::make_shared<Objeto>("pelota", "juegos", "Diversión", 4, 4, 3);
    auto ob3 = std::make_shared<Objeto>("trampolín", "juegos", "Diversión", 3, 5, 2);
    auto ob4 = std::make_shared<Objeto>("pastel", "snacks", "Energía extra", 4, 1, 5);
    auto ob5 = std::make_shared<Objeto>("alivio tos", "poción", "medicina", 5, 2, 3);
    auto ob6 = std::make_shared<Objeto>("no más dolor de cabeza", "poción", "medicina", 5, 2, 3);
    auto ob7 = std::make_shared<Objeto>("sombrero azul", "accesorios", "estilizador", 1, 2, 7);
    auto ob8 = std::make_shared<Objeto>("zapatos mcqueen", "accesorios", "estilizador", 1, 2, 7);

    // Mostrar objetos
    shared_ptr<Objeto> objetos[] = {ob1, ob2, ob3, ob4, ob5, ob6, ob7, ob8};
    for (const auto& objeto : objetos) {
        cout << "\nEl objeto es: " << objeto->getNombre()
             << "\ntipo de objeto: " << objeto->getTipo()
             << "\nSu efecto especial es: " << objeto->getEfectoEspecial()
             << "\n+ puntos salud: " << objeto->getAumentoSalud()
             << "\n+ puntos energía: " << objeto->getAumentoExperiencia()
             << "\n+ puntos emocionales: " << objeto->getAumentoEmocional() << endl;
    }

    // Crear usuarios
    Usuario us1("Carol");
    Usuario us2("Marco");
    Usuario us3("Bob");

    //declaro el pbjeto porq usa constructor
    pixelPet pixelPet;

    //registrar Usuarui:
    pixelPet.registrarUsuario(us1);
    pixelPet.registrarUsuario(us2);
    pixelPet.registrarUsuario(us3);


    // Crear mascotas como shared_ptr
    auto masc1 = std::make_shared<Mascota>("Pepinillo", 3, "Regular", "FELIZZZ", 8, 20, 124,"cinta azul");
    auto masc2 = std::make_shared<Mascota>("Guacamole", 4, "Sano", "Bien", 6, 50, 237,"cinta marron");
    auto masc3 = std::make_shared<Mascota>("Nachos", 6, "Regular", "meh .-.", 2, 50, 465,"cinta marron");
    auto masc4 = std::make_shared<Mascota>("Chili", 2, "Enfermo", "FELIZZZ", 5, 10, 299,"cinta naranja");
    auto masc5 = std::make_shared<Mascota>("Kiwi", 6, "Sano", "FELIZZZ", 9, 80, 65,"cinta negra");

    // Mapa de mascotas para usuarios
    map<int, shared_ptr<Mascota>> mascotasUsuario; // Cambiado a shared_ptr
    mascotasUsuario[124] = masc1;
    mascotasUsuario[237] = masc2;
    mascotasUsuario[465] = masc3;
    mascotasUsuario[299] = masc4;
    mascotasUsuario[65] = masc5;

    // Mostrar mascotas
    cout << "\nMascotas Registradas:" << endl;
    for (const auto& par : mascotasUsuario) {
        cout << "\nID: " << par.first
             << " \n- Nombre: " << par.second->getNombre()
             << "\nEdad: " << par.second->getEdad()
             << "\nEstado de Salud: " << par.second->getEstadoSalud()
             << "\nEstado Emocional: " << par.second->getEstadoEmocional()
             << "\nNivel de Energía: " << par.second->getNivelEnergia()
             << "\nExperiencia: " << par.second->getExperiencia()
             << "\nNivel de Evolucion:" << par.second->getNivelEvolucion()<<endl;
    }

    // Clase de cuidados
    Cuidado c1("Alimentado", "10/03/2025", "regular", "sano", "bien", "FELIZZ");
    Cuidado c2("Curación", "26/02/2025", "enfermo", "Regular", "meh.-.", "bien");

    masc1->registrarCuidado(&c1);
    masc2->registrarCuidado(&c2);

    masc1->verHistorialCuidados();
    masc2->verHistorialCuidados();

    // Adoptar mascotas
    us1.adoptarMascota(masc1);
    us1.adoptarMascota(masc4);
    us2.adoptarMascota(masc2);
    us3.adoptarMascota(masc3);

    // Mostrar mascotas de los usuarios
    cout << "\nMascotas de Carol:" << endl;
    us1.mostrarMascotas();
    cout<<"\nMascotas de Marco"<<endl;
    us2.mostrarMascotas();
    cout<<"\nMascotas de Bob"<<endl;
    us3.mostrarMascotas();


//pIXEL_Pets
    pixelPet.mostrarUsuariosRegistrados();

    //metodo buscar
    std::string nombreBuscado = "Marco";
    Usuario* usuarioEncontrado = pixelPet.buscarUsuario(nombreBuscado);
    if (usuarioEncontrado) {
        std::cout << "Usuario encontrado: " << usuarioEncontrado->getUsuario() << std::endl;
    } else {
        std::cout << "Usuario no encontrado." << std::endl;
    }
    return 0;
}

