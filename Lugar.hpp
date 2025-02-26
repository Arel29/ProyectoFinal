#pragma once

#include <string>
class Lugar
{
public:
    std::string nombre;
    int importancia;

public:
    Lugar();
    Lugar(std::string nombre, int importancia);
    ~Lugar();
    void setImportancia(int importancia);
    int getImportancia();
    void setNombre(std::string nombre);
    std::string getNombre();
    void mostrar();
};