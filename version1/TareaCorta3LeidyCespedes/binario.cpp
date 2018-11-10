#include <iostream>

#include "nodobinario.h"
#include "binario.h"
#include<pila.h>
#include <fstream>
#include<string>
#include <vector>
#include <sstream>
#include <cstddef>


void NodoBinario::InsertaBinario(string num,int nombreCiu)
{
    int number;

        // Convert the number into a string.
    number = stoi(num);
    if(number<=stoi(cedula)){
        if(Hizq==nullptr){
            Hizq = new NodoBinario(num,nombreCiu);
        }else{
            Hizq->InsertaBinario(num,nombreCiu);
        }
    }else{
        if(Hder==nullptr){
            Hder = new NodoBinario(num,nombreCiu);
        }else{
            Hder->InsertaBinario(num,nombreCiu);
        }
    }
}

//cambiado
void Binario::InsertaNodo(string num,int nombreCiudad)
{
    if(raiz==nullptr){
        raiz = new NodoBinario(num,nombreCiudad);
    }else{
        raiz->InsertaBinario(num,nombreCiudad);
    }
}

void Binario::PreordenI(){
    NodoBinario *Act = raiz;
    Pila p;
    while(p.Vacia()==false || (Act!=nullptr)){
        if(Act!=nullptr){
            cout<<Act->cedula<<" - ";
            p.Push(Act);
            Act = Act->Hizq;
        }else{
            Act=p.Pop();
            Act=Act->Hder;
        }
    }
}




void Binario::InordenI(){
    NodoBinario *Act = raiz;
    Pila p;
    bool band=true;
    while(band){

        while(Act!=nullptr){
            p.Push(Act);
            Act = Act->Hizq;
        }
        if(!p.Vacia()){
            Act=p.Pop();
            cout<<Act->cedula<<" - ";
            Act=Act->Hder;
        }
        if(p.Vacia() & Act==nullptr){
            break;
        }
    }
}

void Binario::PostordenI(){
    NodoBinario *Act = raiz;
    Pila p;
    Pila p2;
    while(!p.Vacia() || Act!=nullptr){
        if(Act!=nullptr){
            p2.Push(new NodoBinario(Act->cedula,Act->Indice));
            p.Push(Act);
            Act = Act->Hder;
        }else{
            Act=p.Pop();
            Act = Act->Hizq;
        }
    }
    while(!p2.Vacia()){
        NodoBinario *salida=p2.Pop();
        cout<<salida->cedula<<" - ";
    }
}

void PreordenR(NodoBinario *R){

    if(R==nullptr){
        return;
    }else{
        cout<<R->cedula<<" - ";
        PreordenR(R->Hizq);
        PreordenR(R->Hder);
    }
}

void InordenR(NodoBinario *R){

    if(R==nullptr){
        return;
    }else{
        InordenR(R->Hizq);
        cout<<R->cedula<<" - ";
        InordenR(R->Hder);
    }
}


void PostordenR(NodoBinario *R){

    if(R==nullptr){
        return;
    }else{
        PostordenR(R->Hizq);
        PostordenR(R->Hder);
        cout<<R->cedula<<" - ";
    }
}



/*void Binario::Borrar(NodoBinario* D){
  NodoBinario *q;
  if (D->Hder != NULL)
    Borrar(D->Hder);
  else{
    q->cedula = D->cedula;
    q->Indice=D->Indice;
    q = D;
    D = D->Hizq;

  }
}*/
/*void Binario::Borrar(NodoBinario* D, bool Hh)
{
    NodoBinario *q;
    if(D->Hder !=NULL){
        Borrar(D->Hder, Hh);
        if(Hh){
            Equilibrar2(D, Hh);
        }else{
            q->codigoCiudad=D->codigoCiudad;
            q=D;
            D=D->Hizq;
            Hh = true;
        }
    }
}*/

/*void Binario:: leerArchivo(string clientes){
    Binario a1;
    string line;
    string cedula;
    string nombrePersona;

    ifstream myfile (clientes+".txt");
    if (myfile.is_open())
    {
        while ( getline (myfile,line) )
        {
            vector <string> tokens;
            stringstream separarLineaEntrante(line);
            string intermedio;
            while(getline(separarLineaEntrante, intermedio, ';')){
                 tokens.push_back(intermedio);
            }
            cedula=tokens[0];
            nombrePersona=tokens[1];

            if (validacionArbol(a1.raiz,cedula)==false){
                InsertaNodo(cedula,nombrePersona);
                cout<<cedula<<endl;
                a1.InsertaNodo(cedula,nombrePersona);
            }
        }
        myfile.close();
      }else cout << "Unable to open file"<<endl;
}*/

void Binario::crearArbolIndexado(){
    raiz=NULL;

    string line;
    string cedula;
    string indice1;
    int indice;

    ifstream myfile ("Indices.txt");
    if (myfile.is_open())
    {
        while ( getline (myfile,line) )
        {
            vector <string> tokens;
            stringstream separarLineaEntrante(line);
            string intermedio;
            while(getline(separarLineaEntrante, intermedio, ';')){
                 tokens.push_back(intermedio);
            }
            cedula=tokens[1];
            indice1=tokens[0];

            stringstream geek3(indice1);
            geek3>>indice;

            InsertaNodo(cedula,indice);

        }
        myfile.close();
      }else cout << "Unable to open file"<<endl;

}





bool Binario::validacionArbol(pNodoBinario arbol,string cedulaCli){
     /*cout<<cedulaCli<<endl;
     cout<<"Ha entrado en comprobar ciudad"<<endl;

     while(arbol!=nullptr){
         if(stoi(arbol->cedula)==stoi(cedulaCli)){
             return true;
         }
         if(stoi(arbol->cedula)>stoi(cedulaCli)){
             arbol = arbol->Hizq;
         }
         if(stoi(arbol->cedula)<stoi(cedulaCli)){
             arbol = arbol->Hder;
         }
     }
     return false;*/

}

//----------------------------------------------------------------------------------------------

void Binario::borrarNodo(const int dat)


{
   pNodoBinario padre = NULL;
   pNodoBinario nodo;
   int aux;

   pNodoBinario actual = raiz;
   // Mientras sea posible que el valor esté en el árbol
   while(actual!=NULL) {
      if(dat == stoi(actual->cedula)) { // Si el valor está en el nodo actual
         if(actual->Hder==NULL && actual->Hizq) { // Y si además es un nodo hoja: lo borramos
            if(padre) // Si tiene padre (no es el nodo raiz)
               // Anulamos el puntero que le hace referencia
               if(padre->Hder == actual) padre->Hder = NULL;
               else if(padre->Hizq == actual) padre->Hizq = NULL;
            delete actual; // Borrar el nodo
            actual = NULL;
            return;
         }
         else { // Si el valor está en el nodo actual, pero no es hoja
            // Buscar nodo
            padre = actual;
            // Buscar nodo más izquierdo de rama derecha
            if(actual->Hder) {
               nodo = actual->Hder;
               while(nodo->Hizq) {
                  padre = nodo;
                  nodo = nodo->Hizq;
               }
            }
            // O buscar nodo más derecho de rama izquierda
            else {
                if (actual->Hizq!=NULL){
               nodo = actual->Hizq;
               while(nodo->Hder!=NULL) {
                  padre = nodo;
                  nodo = nodo->Hder;
               }}
            }
            // Intercambiar valores de no a borrar u nodo encontrado
            // y continuar, cerrando el bucle. El nodo encontrado no tiene
            // por qué ser un nodo hoja, cerrando el bucle nos aseguramos
            // de que sólo se eliminan nodos hoja.
            aux = stoi(actual->cedula);
            cout<<aux<<endl;

            int aux2=actual->Indice;
            cout<<aux2<<endl;
            if (nodo!=NULL){
            actual->cedula = nodo->cedula;
            actual->Indice=nodo->Indice;
            nodo->cedula = to_string(aux);
            nodo->Indice=aux2;
            actual = nodo;}
         }
      }
      else { // Todavía no hemos encontrado el valor, seguir buscándolo
         padre = actual;
         if(dat > stoi(actual->cedula)) actual = actual->Hder;
         else if(dat < stoi(actual->cedula)) actual = actual->Hizq;
      }
   }
}











