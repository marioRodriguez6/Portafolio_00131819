#include <iostream>
using namespace std;

//------ Creacion de nodo y de arbol ------
struct nodo{
    int info;
    struct nodo *izq;
    struct nodo *der;
};
typedef struct nodo Nodo;
typedef struct nodo *Arbol;

Arbol crearArbol(int x){
    Arbol p = new Nodo;
    p->info = x;
    p->izq = NULL;
    p->der = NULL;
    return p;
}

//------ Agregar nodos a un arbol ------
void asignarIzq(Arbol a, int unDato){
    if(a == NULL)
        cout << "Error: arbol vacio" << endl;
    else if(a->izq != NULL)
        cout << "Error: subarbol IZQ ya existe" << endl;
    else
        a->izq = crearArbol(unDato);
}

void asignarDer(Arbol a, int unDato){
    if(a == NULL)
        cout << "Error: arbol vacio" << endl;
    else if(a->der != NULL)
        cout << "Error: subarbol DER ya existe" << endl;
    else
        a->der = crearArbol(unDato);
}


void agregarNodo(Arbol a1, Arbol a2){
    int numero = 0;
    cout << "Numero a agregar: ";
    cin >> numero;

    Arbol p = a1;
    Arbol p1 = a2;

    while(true){
        if(numero == p->info){
            cout << "Error " << numero << " ya existe" << endl;
            return;
        } //buscando el numero a la izquierda o derecha
        else if(numero < p->info){
            if(p->izq == NULL)
                break;
            else{
                p = p->izq;
                p1 = p1->der;
            }
        }
        else{
            if(p->der == NULL)
                break;
            else{
                p = p->der;
                p1 = p1->izq;
            }
        }
    }

    if(numero < p->info){
        asignarIzq(p, numero);
        asignarDer(p1, numero);
    }
    else{
        asignarDer(p, numero);
        asignarIzq(p1, numero);
    }
}


void inorden(Arbol a){
    if(a != NULL){
        inorden(a->izq);
        cout << " " << a->info;
        inorden(a->der);
    }else
        cout << endl;
}

void recorrerArbol(Arbol a1, Arbol a2){
    cout << "arbol en orden:";
    inorden(a1);
    cout << "Arbol al revez:";
    inorden(a2);
}

int main(){
    int var = 0;
    cout<<"Inicializando arbol...\nValor contenido en la raiz: ";
    cin >> var;

    Arbol tree1 = crearArbol(var);
    Arbol treedos = crearArbol(var);

    bool continuar = true;
    do{
        int opcion = 0;
        cout << "Menu: \n\t1) Agregar\n\t2) Recorrer"
        << "\n\t3) Salir\n\tOpcion elegida: ";
        cin >> opcion;
        switch(opcion){
            case 1: agregarNodo(tree1, treedos);
                break;
            case 2: recorrerArbol(tree1, treedos);
                break;
            case 3: continuar = false;
                break;
            default: cout << "Opcion erronea!" << endl;
                break;
        }
    }while(continuar);

    return 0;
}
