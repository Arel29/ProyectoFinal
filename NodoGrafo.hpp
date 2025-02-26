#pragma once

#include "ListaSimple.hpp"
#include "Lugar.hpp"

class NodoGrafo {
public:
    NodoGrafo(const Lugar& dato);
    Lugar getDato() const;
    void agregarVecino(NodoGrafo* vecino, float distancia);
    ListaSimple<NodoGrafo*>& getVecinos();
    ListaSimple<float>& getDistancias();

private:
    Lugar dato;
    ListaSimple<NodoGrafo*> vecinos;
    ListaSimple<float> distancias;
};