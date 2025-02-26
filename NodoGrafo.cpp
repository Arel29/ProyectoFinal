#include "NodoGrafo.hpp"

NodoGrafo::NodoGrafo(const Lugar& dato)
    : dato(dato)
{
}

Lugar NodoGrafo::getDato() const
{
    return dato;
}

void NodoGrafo::agregarVecino(NodoGrafo *vecino, float distancia)
{
    vecinos.insertarACola(vecino);
    distancias.insertarACola(distancia);
}

ListaSimple<NodoGrafo *> &NodoGrafo::getVecinos()
{
    return vecinos;
}

ListaSimple<float> &NodoGrafo::getDistancias()
{
    return distancias;
}