//
// Created by majo on 27/03/2025.
//

#ifndef HABILIDAD_H
#define HABILIDAD_H
#include<string>
using namespace std;

class Habilidad {
private:
    string nombre;
    int experienciaRequerida;

public:
    Habilidad();
    Habilidad(const string&  nombre,int experienciaRequerida);

    //getters
    string getNombre() const;

    int getExperienciaRequerida() const;

    //setters
    void setNombre(const string&  nombre);
    void setExperienciaRequerida(int experienciaRequerida);


};




#endif //HABILIDAD_H
