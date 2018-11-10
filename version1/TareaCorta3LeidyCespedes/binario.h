#ifndef BINARIO_H
#define BINARIO_H



#include "nodobinario.h"
#include <iostream>
using namespace std;

class Binario{
public:
    pNodoBinario raiz;

    Binario():raiz(nullptr){}

    void InsertaNodo(string cedula,int nombreCliente);
    void PreordenI();
    void InordenI();
    void PostordenI();

    bool Hh;
    void crearArbolIndexado();
    void leerArchivo(string ciudad);
    bool validacionArbol(pNodoBinario b,string cedula);
   void borrarNodo(const int dat);
    //void Borrar(NodoBinario *nodoB);
    void BorrarBalanceado(NodoBinario *r, bool, int eliminar);
    void Equilibrar1(NodoBinario *n, bool);
    void Equilibrar2(NodoBinario *n, bool);
    void InsertarBalanceado(NodoBinario *r, bool, int x);
    void RotacionDobleIzquierda(NodoBinario *n1, NodoBinario *n2);
    void RotacionDobleDerecha(NodoBinario *n1, NodoBinario *n2);
    void RotacionSimpleIzquierda(NodoBinario *n1, NodoBinario *n2);
    void RotacionSimpleDerecha(NodoBinario *n1, NodoBinario *n2);


};








#endif // BINARIO_H
