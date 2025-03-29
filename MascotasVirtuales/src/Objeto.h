//
//

#ifndef OBJETO_H
#define OBJETO_H
#include<string>
using namespace std;


class Objeto {
private:
    string nombre;
    string tipo;
    string efectoEspecial;
    int aumentoSalud;
    int aumentoExperiencia;
    int aumentoEmocional;


public:
    Objeto();
    Objeto(const string& nombre, const string& tipo,const string& efectoEspecial, int aumentoSalud, int aumentoExperiencia,int aumentoEmocional);

    //getters
    string getNombre() const;
    string getTipo()const;
    string getEfectoEspecial()const;
    int getAumentoSalud()const;
    int getAumentoExperiencia()const;
    int getAumentoEmocional()const;


    //setters
    void setNombre(const string& nombre);
    void setTipo(const string& tipo);
    void setEfectoEspecial(const string& efectoEspecial);
    void setAumentoSalud(int aumentoSalud);
    void setAumentoExperiencia(int aumentoExperiencia);
    void setAumentoEmocional(int aumentoEmocional);


};



#endif //OBJETO_H
