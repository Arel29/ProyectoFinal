#include "Grafo.hpp"
#include <iostream>

Grafo::Grafo() {}

NodoGrafo *Grafo::agregarNodo(const Lugar &dato)
{
    NodoGrafo *nuevoNodo = new NodoGrafo(dato);
    nodos.insertarACola(nuevoNodo);
    return nuevoNodo;
}

void Grafo::agregarArista(NodoGrafo *origen, NodoGrafo *destino, float distancia)
{
    if (origen && destino)
    {
        origen->agregarVecino(destino, distancia);
        destino->agregarVecino(origen, distancia); // Si el grafo es no dirigido
    }
}

void Grafo::mostrarGrafo()
{
    nodos.executarEnLista([](NodoGrafo *nodo)
                          {
        std::cout << "Nodo " << nodo << "(" << nodo->getDato().getNombre() << "):";
        NodoGrafo* vecino;
        float distancia;
        for (int i = 0; i < nodo->getVecinos().contar(); ++i) {
            vecino = nodo->getVecinos().conseguirDato(i);
            distancia = nodo->getDistancias().conseguirDato(i);
            std::cout << " -> " << vecino->getDato().getNombre() << " (distancia: " << distancia << ")";
        }
        std::cout << std::endl; });
}

void Grafo::crearMatrizAdyacencia(float **matriz, int n)
{
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            matriz[i][j] = 0.0f;

    nodos.executarEnLista([&](NodoGrafo *nodo)
                          {
        int i = nodos.buscar(nodo);
        NodoGrafo* vecino;
        float distancia;
        for (int j = 0; j < nodo->getVecinos().contar(); ++j) {
            vecino = nodo->getVecinos().conseguirDato(j);
            distancia = nodo->getDistancias().conseguirDato(j);
            int k = nodos.buscar(vecino);
            matriz[i][k] = distancia;
        } });
}