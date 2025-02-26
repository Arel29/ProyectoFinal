#pragma once

#include "NodoGrafo.hpp"
#include "ListaSimple.hpp"
#include "Lugar.hpp"

class Grafo
{
public:
    Grafo();
    NodoGrafo *agregarNodo(const Lugar &dato);
    void agregarArista(NodoGrafo *origen, NodoGrafo *destino, float distancia);
    void mostrarGrafo();
    void crearMatrizAdyacencia(float **matriz, int n);

private:
    ListaSimple<NodoGrafo *> nodos;
};