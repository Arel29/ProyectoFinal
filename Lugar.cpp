#include "Lugar.hpp"
#include <iostream>

Lugar::Lugar()
    : importancia(0),
    nombre("")
{
}

Lugar::Lugar(std::string nombre, int importancia)
    : nombre(nombre), importancia(importancia)
{
}

Lugar::~Lugar()
{
}

void Lugar::setImportancia(int importancia)
{
    this->importancia = importancia;
}

int Lugar::getImportancia()
{
    return importancia;
}

void Lugar::setNombre(std::string nombre)
{
    this->nombre = nombre;
}

std::string Lugar::getNombre()
{
    return nombre;
}

void Lugar::mostrar()
{
    std::cout << "Lugar: " << nombre << ", Importancia: " << importancia << std::endl;
}