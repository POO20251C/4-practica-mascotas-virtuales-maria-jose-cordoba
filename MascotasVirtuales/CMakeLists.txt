cmake_minimum_required(VERSION 3.30)
project(MascotasVirtuales)

set(CMAKE_CXX_STANDARD 20)

add_executable(MascotasVirtuales main.cpp
        src/Habilidad.cpp
        src/Habilidad.h
        src/Objeto.cpp
        src/Objeto.h
        src/Cuidado.cpp
        src/Cuidado.h
        src/Mascota.cpp
        src/Mascota.h
        src/Usuario.cpp
        src/Usuario.h
        src/pixelPet.cpp
        src/pixelPet.h)
