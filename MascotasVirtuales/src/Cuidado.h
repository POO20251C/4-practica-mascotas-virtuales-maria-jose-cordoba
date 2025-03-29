// Cuidado.h
#ifndef CUIDADO_H
#define CUIDADO_H

#include <string>
#include <vector>
#include "Objeto.h"

class Cuidado {
    static std::vector<Cuidado*> historialCuidados;
private:
    std::string nombre;
    std::string fecha;
    std::string estadoSaludAntes;
    std::string estadoSaludD;
    std::string estadoEmocionalAntes;
    std::string estadoEmocionalD;
    std::vector<Objeto*> objetos;

public:

    Cuidado();

    Cuidado(const std::string& nombre, const std::string& fecha,
            const std::string& estadoSaludAntes, const std::string& estadoSaludD,
            const std::string& estadoEmocionalAntes, const std::string& estadoEmocionalD);

    // Getters
    std::string getNombre() const;
    std::string getFecha() const;
    std::string getEstadoSaludAntes() const;//tambien con emocional porq hay hisorial tambie
    std::string getEstadoSaludD() const;//estado de salud despues epro la palabra larga me hizo eprder jeje
    std::string getEstadoEmocionalAntes() const;
    std::string getEstadoEmocionalD() const;
    std::vector<Objeto*> getObjetos() const;


    // Setters
    void setNombre(const std::string& nombre);
    void setFecha(const std::string& fecha);
    void setEstadoSaludAntes(const std::string& estadoSaludAntes);
    void setEstadoSaludD(const std::string& estadoSaludD);
    void setEstadoEmocionalAntes(const std::string& estadoEmocionalAntes);
    void setEstadoEmocionalD(const std::string& estadoEmocionalD);
    void setObjetos(const std::vector<Objeto*>& objetos);

    // Metoods
    void agregarObjeto(Objeto* objeto);//aca se agregan a la "lista" del vector objetos a cuidados
    void mostrarObjetoUsado() const;//la idea es q se muestre q objeto uso
    void calcularSalud();
    void registrarEstadoEmocional();
    static void verHisotrialCuidados();
};

#endif // CUIDADO_H
