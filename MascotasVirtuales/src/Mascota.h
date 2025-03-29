//
//

#ifndef MASCOTA_H
#define MASCOTA_H
#include<string>
#include<vector>
#include"Cuidado.h"
#include"Habilidad.h"
#include"Objeto.h"

using namespace std;
class Mascota {
private:
    string nombre;
    int edad;
    string estadoSalud;
    string estadoEmocional;
    vector<Habilidad*> habilidades;
    vector<Cuidado*> historialCuidados;
    vector<Objeto*> objetos;
    int nivelEnergia;
    int experiencia;
    int id;
    string nivelEvolucion;
    static const int ExperienciaNecesaria[4];

public:
    Mascota();
    Mascota(const string& nombre, int edad, const string& estadoSalud,const string& estadoEmocional,int nivelEnergia, int experiencia, int id, const string& nivelEvolucion);

    //getters
    string getNombre() const;
    int getEdad()const;
    string getEstadoSalud()const;
    string getEstadoEmocional()const;
    vector<Habilidad*> getHabilidades()const;
    vector<Cuidado*> getHistorialCuidados()const;
    vector<Objeto*> getObjetos()const;
    int getNivelEnergia()const;
    int getExperiencia()const;
    int getId()const;
    string getNivelEvolucion() const;


    //setters
    void setNombre(const string& nombre);
    void setEdad(int edad);
    void setEstadoSalud(const string& estadoSalud);
    void setEstadoEmocional(const string& estadoEmocional);
    void setNivelEnergia(int nivelEnergia);
    void setExperiencia(int experiencia);
    void setId(int id);
    void setNivelEvolucion(const string& nivelEvolucion);


//Metodos
    void aumentarEdad(int nuevaEdad);
    void registrarEstadoSalud(const string& estadoSalud);
    void registrarEstadoEmocional(const string& nuevoEstado);
    void verHistorialCuidados()const;
    void registrarCuidado(Cuidado* nuevoCuidado);
    void registrarNivelEnergia(int nuevoNivelEnergia);
    void mejorarExperiencia(int puntos);
    void agregarHabilidad(Habilidad* nuevaHabilidad);
    void registrarObjeto(Objeto* nuevoObjeto);
    void usarObjeto(Objeto* objeto);
    void usarHabilidad(Habilidad* habilidad);
    void verificarEvolucion();

};



#endif //MASCOTA_H
