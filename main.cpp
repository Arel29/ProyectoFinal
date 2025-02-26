#include "Grafo.hpp"
#include "Lugar.hpp"
#include <iostream>
#include <utility> // for std::pair

// Overload the << operator for std::pair
template <typename T1, typename T2>
std::ostream& operator<<(std::ostream& os, const std::pair<T1, T2>& p) {
    os << "(" << p.first << ", " << p.second << ")";
    return os;
}

int main() {
    Grafo grafo;

    NodoGrafo* nodoA = grafo.agregarNodo(Lugar("Bliblioteca", 1));
    NodoGrafo* nodoB = grafo.agregarNodo(Lugar("Bloques A B", 1));
    NodoGrafo *nodoD = grafo.agregarNodo(Lugar("Bloques C ", 1));
    NodoGrafo *nodoF = grafo.agregarNodo(Lugar("Bloque D", 1));
    NodoGrafo* nodoG = grafo.agregarNodo(Lugar("Laboratorios de computacion H-G", 1));
    NodoGrafo *nodoH = grafo.agregarNodo(Lugar("Plaza central ESPE ", 1));
    NodoGrafo *nodoI = grafo.agregarNodo(Lugar("Area deportiva", 1));
    NodoGrafo *nodoJ = grafo.agregarNodo(Lugar("Coliseo ", 1));
    NodoGrafo *nodoK = grafo.agregarNodo(Lugar("Residencia Politecnica ESPE ", 1));
    NodoGrafo *nodoL = grafo.agregarNodo(Lugar("Centro de investigaciones ESPE ", 1));
    NodoGrafo *nodoM = grafo.agregarNodo(Lugar("CICTE ESPE ", 1));
    NodoGrafo *nodoN = grafo.agregarNodo(Lugar("Laboratorios quimica/electrica ", 1));
    NodoGrafo *nodoO = grafo.agregarNodo(Lugar("Laboratorio de mecanica ", 1)); 
    NodoGrafo *nodoQ = grafo.agregarNodo(Lugar("Laboratorio Geografica", 1));
    NodoGrafo *nodoC = grafo.agregarNodo(Lugar("Edificio administrativo", 1));
    NodoGrafo *nodoE = grafo.agregarNodo(Lugar("Interseccion 1 ", 1));

    grafo.agregarArista(nodoA, nodoB, 1.5f);
    grafo.agregarArista(nodoA, nodoC, 2.0f);
    grafo.agregarArista(nodoB, nodoD, 2.5f);
    grafo.agregarArista(nodoB, nodoE, 3.0f);
    grafo.mostrarGrafo();

    // Example of printing a pair
    std::pair<std::string, float> examplePair = {"Example", 4.5f};
    std::cout << "Example pair: " << examplePair << std::endl;

    return 0;
}
