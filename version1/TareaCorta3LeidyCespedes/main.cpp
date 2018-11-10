/**LEIDY CESPEDES ACOSTA
 * TECNOLOGICO DE COSTA RICA
 * ESTRUCTURAS DE DATOS
 * TAREA CORTA 3
 * IVANNIA CERDAS
 * SEMESTRE II 2018
 */

#include <iostream>
#include<binario.h>
#include <stdlib.h>
#include<fstream>
#include<string>
#include <vector>
#include <sstream>
#include <cstddef>
#include <pila.h>

using namespace std;



class Indices{

public:
    void leerArchivoClienteCedula();
    bool validarClientesCedula();
    void crearArbol();
    void menu();
    void buscarCliente(int cedula,pNodoBinario raiz);
    void eliminarCliente(string cedula);
    void insertarCliente(string cedula,string nombre);

    int buscarIndice(int cedula,pNodoBinario raiz);
    int validacionCedulas(pNodoBinario arbol,int cedulaCli);
    void cargarClientes(int indice);
    void prueba();
    void borarNodo(string cedula,int indice);
    void marcarEnArchivo(int indice);
    void eliminarDeCache(string cedula);
    int recorrerArchivoClientes(string cedulaEnt,string nombreEnt);
    void agregarAarchivoIndice(int indice,string cedula);
    void purgar();
    void reindexar();
    void agregarPredecesores();
    void agregarPredecesores2();



private:
    int contador=1;
    Binario arbolIndexado;
    string arreglo[20];
    Binario a1;
    bool vacio=true;
    bool encontrado=false;
    int contInsertar=0;
    int contadorResta=0;
    int contadorAgregadosPredecesores=0;

};


//--------------------------------------------------------------------------------------------------------------


void Indices::leerArchivoClienteCedula(){

    string line;
    string cedula;
    string nombrePersona;
    ifstream myfile ("ArchClientes.txt");
    string total;
    string total2;
    int cedulaint=0;

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

            if (a1.raiz==NULL){


                total=to_string(contador)+";"+cedula;
                total2=cedula+";"+nombrePersona;
                a1.InsertaNodo(cedula,contador);
                contador++;

            }else{

                  if (validacionCedulas(a1.raiz,stoi(cedula))!=78){
                    total+="\n"+to_string(contador)+";"+cedula;
                    total2+="\n"+cedula+";"+nombrePersona;
                    a1.InsertaNodo(cedula,contador);
                    contador++;
                  }
              }
        }
        myfile.close();
        ofstream archivo;
        archivo.open("Indices.txt");

        archivo<<total;
        archivo.close();

        ofstream archivoC;
        archivoC.open("ArchClientes.txt");

        archivoC<<total2;
        archivoC.close();


      }else cout << "Unable to open file"<<endl;
}


//-------------------------------------------------------------------------------------------------------------

int Indices::validacionCedulas(pNodoBinario R,int cedula){

    //buscar cedula en arbol
    if (R==NULL){

        return 0;
    }else{
        if (cedula==stoi(R->cedula)){

            return 78;
        }else{
        if(cedula<stoi(R->cedula)){
           validacionCedulas(R->Hizq,cedula);
        }else{
            validacionCedulas(R->Hder,cedula);
        }
        }
    }

}

//-------------------------------------------------------------------------------------------------------------

void Indices::crearArbol(){
    arbolIndexado.crearArbolIndexado();
menu();
}

//-------------------------------------------------------------------------------------------------------------

void Indices::menu(){
    int numero,cedula;
    string nombre;

    cout<<"\n Menu\n"<<endl;
    cout<<" 1.Buscar cliente\n 2.Eliminar Cliente\n 3.Insertar Clientes\n 4.Purgar\n 5.Recorrido preOrden del arbol"<<endl;
    cout<<"\nDigite la accion que desea realizar: ";
    cin>>numero;

    if (numero!=1 && numero!=2 && numero!=3 && numero!=4 && numero!=5){
        cout<<"\nNumero incorrecto!\n"<<endl;
        menu();
    }else{
        if (numero==1){

             cout<<"Inserte el numero de cedula del cliente: ";
             cin>>cedula;
             buscarCliente(cedula,arbolIndexado.raiz);
             int c=0;
             menu();

        }
        if (numero==2){
            cout<<"Inserte el numero de cedula del cliente: ";
            cin>>cedula;
            int ind=buscarIndice(cedula,arbolIndexado.raiz);
            borarNodo(to_string(cedula),ind);
            marcarEnArchivo(ind);

            eliminarDeCache(to_string(cedula));


            menu();
        }
        if (numero==3){
            cout<<"Inserte el numero de cedula del cliente: ";
            cin>>cedula;
            cout<<"Inserte el nombre del cliente: ";
            cin>>nombre;
            insertarCliente(to_string(cedula) ,nombre);

            menu();

        }
        if (numero==4){
            purgar();
            reindexar();
            arbolIndexado.crearArbolIndexado();
            menu();
        }
        if (numero==5){
            arbolIndexado.PreordenI();
            menu();
        }
    }
}

//--------------------------------------------------------------------------------------------------------------

void Indices::buscarCliente(int cedula,pNodoBinario R){
    encontrado=false;
    int indice=0;
    indice=buscarIndice(cedula,R);

    string cedulaPreguntada= to_string(cedula);

    if (indice==0){
        cout<<"El cliente no existe o el arbol esta vacio"<<endl;
    }else{

        if (vacio==true){
            cargarClientes(indice);



            cout<<"El cliente buscado en archivp es(cedula;nombre): "<<arreglo[0]<<endl;
            vacio=false;

        }else{
            int contador=0;
            string cadena;
            string cedulaCadena;
            string nombreCadena;

            while (contador<=19){


                cadena=arreglo[contador];
                vector <string> tokens;
                stringstream separarLineaEntrante(cadena);
                string intermedio;
                while(getline(separarLineaEntrante, intermedio, ';')){
                     tokens.push_back(intermedio);
                }
                cedulaCadena=tokens[0];
                nombreCadena=tokens[1];

                //cout<<"Ced preguntada: "<<cedulaPreguntada<<"       "<<"Ced Cache: "<<cedulaCadena<<endl;
                if (stoi(cedulaPreguntada)==stoi(cedulaCadena)){

                    cout<<"\nCliente encontrado en memoria cache: "<<cadena<<endl;
                    encontrado=true;
                    contador++;
                }
                else{
                    contador++;
                }

            }
            if (encontrado==false){
                cout<<"No lo encuuentra en cache"<<endl;

                vacio=true;
                buscarCliente(cedula,R);
            }

        }

    }

}

//-------------------------------------------------------------------------------------------------------------------

int Indices::buscarIndice(int cedula,pNodoBinario R){
    //buscar cedula en arbol
    if (R==NULL){
        return 0;
    }else{
        if (cedula==stoi(R->cedula)){
            return R->Indice;
        }

            if(cedula<stoi(R->cedula)){
                buscarIndice(cedula,R->Hizq);
            }else{
                buscarIndice(cedula,R->Hder);
            }
    }
}

//---------------------------------------------------------------------------------------------------------------

void Indices::cargarClientes(int indice){

    int contadorLinea=1;
    int contadorArray=0;
    string line;
    string cedula;
    string nombrePersona;
    ifstream myfile ("ArchClientes.txt");
    string total;
    string cad3;


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
           cad3 = nombrePersona.substr(0,1);

            if (contadorLinea==indice && contadorArray<=19){

                if (cad3!="1"){
                    arreglo[contadorArray]=cedula+";"+nombrePersona;
                    contadorArray++;
                }

            }else{
                contadorLinea++;
            }


        }
        myfile.close();

      }else cout << "Unable to open file"<<endl;

    if (contadorArray<=19){

       //**********************poner aqui mismo****************************
        string line2;
        string cedula2;
        string nombrePersona2;
        ifstream myfile ("ArchClientes.txt");
        string total;


        if (myfile.is_open())
        {
            while ( getline (myfile,line2) )
            {
                vector <string> tokens;
                stringstream separarLineaEntrante(line2);
                string intermedio;
                while(getline(separarLineaEntrante, intermedio, ';')){
                     tokens.push_back(intermedio);
                }
                cedula2=tokens[0];
                nombrePersona2=tokens[1];
                 cad3 = nombrePersona.substr(0,1);

                if (contadorArray<=19){

                    if (cad3!="1"){
                        arreglo[contadorArray]=cedula2+";"+nombrePersona2;
                        contadorArray++;
                    }



                }

            }
            myfile.close();

          }else cout << "Unable to open file"<<endl;

        //**********************terminar aqui cerrar archivo**************************
    }

}

//---------------------------------------------------------------------------------------------------------------

void Indices::borarNodo(string cedula1,int indice){
    string line;
    string cedula;
    string indice1;
    int indice2;
    int cont=1;
    string texto;
    int cedulaAborrar=stoi(cedula1);
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

            if (cedulaAborrar==stoi(cedula)){
                cont++;
            }else{
                if(cont==1){
                    texto=indice1+";"+cedula;
                    cont++;
                }
                else{
                    texto+="\n"+indice1+";"+cedula;
                    cont++;
                }
            }
        }
        myfile.close();
        ofstream archivo;
        archivo.open("Indices.txt");

        archivo<<texto;
        archivo.close();
        Binario a;
        arbolIndexado=a;
        arbolIndexado.crearArbolIndexado();

      }else cout << "Unable to open file"<<endl;
}

//---------------------------------------------------------------------------------------------------------------

void Indices::marcarEnArchivo(int indice){
    cout<<"llega"<<endl;
    string line;
    string cedula;
    string nombre;
    int indice2;
    int cont=1;
    string texto;
    ifstream myfile ("ArchClientes.txt");
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
            nombre=tokens[1];
            string uno="1";

            if (cont==indice){
                if (cont==1){
                    texto=cedula+";"+uno+nombre+uno;
                    cont++;
                }
                else{
                    texto+="\n"+cedula+";"+uno+nombre+uno;
                    cont++;
                }

            }else{
                if(cont==1){
                    texto=cedula+";"+nombre;
                    cont++;
                }
                else{

                    texto+="\n"+cedula+";"+nombre;
                    cont++;
                }
            }
        }

        myfile.close();
        ofstream archivo;
        archivo.open("ArchClientes.txt");
        archivo<<texto;
        archivo.close();



      }else cout << "Unable to open file"<<endl;

}

//------------------------------------------------------------------------------------------------

void Indices::eliminarDeCache(string cedula){
    int cont=0;
    string cadena;
    string cedulaCadena;
    string nombreCadena;
    while (cont<=19){
        if (vacio==false){
            cadena=arreglo[cont];
            vector <string> tokens;
            stringstream separarLineaEntrante(cadena);
            string intermedio;
            while(getline(separarLineaEntrante, intermedio, ';')){
                 tokens.push_back(intermedio);
            }
            cedulaCadena=tokens[0];
            nombreCadena=tokens[1];

            if (stoi(cedula)==stoi(cedulaCadena)){

                arreglo[cont]="00000000000000000000;00000000000";
                cont++;
            }
            else{
                cont++;
            }
        }else{
            cont++;
        }

    }
}

//-------------------------------------------------------------------------------------------------


void Indices::insertarCliente(string cedula,string nombre){

    if (validacionCedulas(arbolIndexado.raiz,stoi(cedula))==78){
        cout<<"\nExiste la cedula por lo que no puede ser agregada\n"<<endl;
    }else{

      recorrerArchivoClientes(cedula,nombre);
      cout<<contInsertar<<endl;

      agregarAarchivoIndice(contInsertar,cedula);
      arbolIndexado.InsertaNodo(cedula,contInsertar);
      arbolIndexado.InordenI();
      agregarPredecesores();
      cout<<"\n"<<endl;
      int cont=0;

      while(cont<=19){
           cout<<arreglo[cont]<<endl;
           cont++;
      }

        //recorrer archivo de clientes para ver cuantos hay y asi obtener el indice

    }
}

//-----------------------------------------------------------------------------------------------

int Indices::recorrerArchivoClientes(string cedulaEnt,string nombreEnt){
    contInsertar=1;
    string line;
    string cedula;
    string nombrePersona;
    ifstream myfile ("ArchClientes.txt");
    string total;
    string total2;
    int cedulaint=0;
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

            if (contInsertar==1){
                total=cedula+";"+nombrePersona;
                contInsertar++;
            }
            else{
                total+="\n"+cedula+";"+nombrePersona;
                contInsertar++;
            }

        }
        total+="\n"+cedulaEnt+";"+nombreEnt;
        string appe="\n"+cedulaEnt+";"+nombreEnt;
        myfile.close();




        ofstream archivo;
        archivo.open("ArchClientes.txt", ios::app);
        archivo<<appe;
        archivo.close();
        return 0;
      }else cout << "Unable to open file"<<endl;
}

//------------------------------------------------------------------------------------------------

void Indices::agregarAarchivoIndice(int indice,string cedula){
    ofstream archivo;
    archivo.open("Indices.txt", ios::app);
    // archivo.write(to_string(contador)+";"+cedula);
    archivo<<"\n"<<indice<<";"+cedula;
    archivo.close();
}
//-------------------------------------------------------------------------------------------------

void Indices::purgar(){

    int cont=0;
    ofstream archivo;
    archivo.open("temp.txt", ios::app);


    //***************************************************************************************

    string line;
    string cedula;
    string nombrePersona;
    ifstream myfile ("ArchClientes.txt");
    string total;
    string total2;
    int cedulaint=0;
    string cad3;

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

              cad3 = nombrePersona.substr(0,1);

              if(cad3!="1" && cont==0){
                  archivo<<cedula+";"+nombrePersona;
                  cont++;
              }else{
                  if (cad3!="1" && cont!=0){
                      archivo<<"\n"<<cedula+";"+nombrePersona;
                      cont++;
                  }
              }

        }

        archivo.close();
        myfile.close();

      }else cout << "Unable to open file"<<endl;

    std::remove("ArchClientes.txt"); // delete file
    std::rename("temp.txt","ArchClientes.txt");

}

//----------------------------------------------------------------------------------------------------
void Indices::reindexar(){
    string line;
    string cedula;
    string nombrePersona;
    ifstream myfile ("ArchClientes.txt");
    string total;
    int cont=1;

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

            if (cont==1){
                total=to_string(cont)+";"+cedula;
                cont++;

            }else{
                total+="\n"+to_string(cont)+";"+cedula;
                cont++;
              }
        }
        myfile.close();
        ofstream archivo;
        archivo.open("Indices.txt");

        archivo<<total;
        archivo.close();
      }else cout << "Unable to open file"<<endl;
}

//--------------------------------------------------------------------------------------------

void Indices::agregarPredecesores(){
    cout<<"\n"<<contInsertar<<" cont inser"<<endl;
    contadorResta=contInsertar;
    contadorAgregadosPredecesores=0;

    while(contadorAgregadosPredecesores<=19){
       agregarPredecesores2();
    }
    vacio=false;
}

//------------------------------------------------------------------------------------------------

void Indices::agregarPredecesores2(){
    string cad3;

    int contadorLinea=1;
    string line;
    string cedula;
    string nombrePersona;
    ifstream myfile ("ArchClientes.txt");
    string total;


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

            cad3 = nombrePersona.substr(0,1);



            if (contadorLinea==contadorResta){

                //bien

                if (cad3!="1"){
                    arreglo[contadorAgregadosPredecesores]=cedula+";"+nombrePersona;
                    contadorAgregadosPredecesores++;

                    contadorResta=contadorResta-1;
                    contadorLinea++;
                }
                else{
                    contadorResta=contadorResta-1;
                    contadorLinea++;
                }
            }else{
                 contadorLinea++;
            }

        }
      myfile.close();

      }else cout << "Unable to open file"<<endl;


}

//-----------------------------------------------------------------------------------------------























//---------------------------------------------------------------------------------------------------
int main()
{
    Indices iniciar,arbol,men;
    iniciar.leerArchivoClienteCedula();
     arbol.crearArbol();



    return 0;
}




//*********************************************************************************************
//arreglar:

//buscar borrado de arbol
//*********************************************************************************************
