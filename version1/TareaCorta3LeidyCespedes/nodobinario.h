#ifndef NODOBINARIO_H
#define NODOBINARIO_H


#include<iostream>
using namespace std;
class NodoBinario {
   public:
    //cambiado
    NodoBinario(string cedulaPer, int indice, NodoBinario *der = nullptr, NodoBinario *izq = nullptr, NodoBinario *sig=nullptr, NodoBinario *ant=nullptr):
        Hizq(izq), Hder(der), cedula(cedulaPer),Indice(indice), siguiente(sig), anterior(ant), FB(0) {}


    string cedula;
    int Indice;
    int FB;
    NodoBinario *Hizq, *Hder, *siguiente, *anterior;

    friend class Pila;
    friend class Binario;
    friend class Indices;

    void InsertaBinario(string cedulaPer,int indice);
};


typedef NodoBinario *pnodo;
typedef NodoBinario *pNodoBinario;

void PreordenR(NodoBinario* R);
void InordenR(NodoBinario* R);
void PostordenR(NodoBinario* R);




#endif // NODOBINARIO_H
