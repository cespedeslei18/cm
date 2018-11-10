#ifndef PILA_H
#define PILA_H


#include "nodobinario.h"
#include<iostream>

using namespace std;

class Pila {
   public:
    Pila() : plista(nullptr) {}

    void Push(pnodo);
    void Mostrar();
    bool Vacia() { return plista == nullptr; }
    pnodo Pop();
    int Size();

    pnodo plista;
};

#endif // PILA_H
