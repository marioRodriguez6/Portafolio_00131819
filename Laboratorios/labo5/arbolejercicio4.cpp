#include <iostream>
using namespace std;

//------ Creacion de nodo y de arbol ------
struct nodo{
    int signod;
    struct nodo *izq;
    struct nodo *der;
};
typedef struct nodo Nodo;
typedef struct nodo *Arbol;

Arbol crearArbol(int x){
    Arbol p = new Nodo;
    p->signod = x;
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

void recorrerPersonalizado(Arbol p){
    bool continuar = true;
    do{
        int opcion = 0;
        cout << "\nSe encuentra en el nodo " << p->signod <<endl;
        cout << "\t1)Agregar nodo izquierda\n\t2)Agregar nodo derecha\n";
        cout << "\t3)Ir sub-arbol izquierdo\n\t4)Ir sub-arbol derecho\n";
        cout << "\t5)Regresar al nodo padre\n\tOpcion: ";
        cin >> opcion;
        switch(opcion){
            case 1:
                if (p->izq == NULL){
                    int numero = 0;
                    cout << "Numero a agregar: ";
                    cin >> numero;
                    asignarIzq(p, numero);
                    cout << "Numero agregado exitosamente" << endl;
                }
                else
                    cout << "Error: ya existe sub-arbol izquierdo" << endl;
                break;
            case 2:
                if (p->der == NULL){
                    int numero = 0;
                    cout << "Numero a agregar: ";
                    cin >> numero;
                    asignarDer(p, numero);
                    cout << "Numero agregado exitosamente" << endl;
                }
                else
                    cout << "Error: ya existe sub-arbol derecho" << endl;
                break;
            case 3:
                if (p->izq != NULL)
                    recorrerPersonalizado(p->izq);
                else
                    cout << "Error: NO existe sub-arbol izquierdo" << endl;
                break;
            case 4:
                if (p->der != NULL)
                    recorrerPersonalizado(p->der);
                else
                    cout << "Error: NO existe sub-arbol derecho" << endl;
                break;
            case 5:
                continuar = false;
                break;
            default:
                cout << "Error: Opcion no valida" << endl;
                break;
        }
    }while(continuar);
}

//Viendo si es binario de busqueda
void recorrer(Arbol a, bool *checking, int n){
    if(a->der != NULL){
        if(n > a->signod){
            (*checking) = false;
        }else if(*checking){
            recorrer(a->der, checking, n);
        }
    }
    if(a->izq != NULL){
        if(n < a->signod){
            (*checking) = false;
        }else if(*checking){
            recorrer(a->izq, checking, n);
        }
    }
}
void arbolbinquiz(Arbol a, bool *checking){
    int number = a->signod;

    if(a->der != NULL){
        if(number > a->der->signod){
            (*checking) = false;
        }else if(*checking){
            recorrer(a->der, checking, number);
        }
    }
    if(a->izq != NULL){
        if(number < a->izq->signod){
            (*checking) = false;
        }else if(*checking){
            recorrer(a->izq, checking, number);
        }
    }

    if(*checking){
        if(a->der != NULL)
            arbolbinquiz(a->der, checking);
        if(a->izq != NULL)
            arbolbinquiz(a->izq, checking);
    }
}
//fin

int main(){
    int variable = 0;
    cout<<"Inicializando arbol...\nValor contenido en la raiz: ";
    cin >> variable;

    Arbol arbol = crearArbol(variable);

    bool continuar = true;
    do{
        int opcion = 0;
        cout << "Menu:\n\t1)Es un arbol binario de busqueda? ";
        cout << "\n\t2) Agregar";
        cout << "\n\t3) Salir\n\tOpcion elegida: ";
        cin >> opcion;

        bool checking = true;
        switch(opcion){
            case 1:
                arbolbinquiz(arbol, &checking);
                if(checking){
                    cout << "Si, lo es" << endl;
                }else{
                    cout << "No, no lo es" << endl;
                }
                break;
            case 2: recorrerPersonalizado(arbol);
            break;
            case 3: continuar = false;
            break;
            default: cout << "Opcion erronea!" << endl;
            break;
        }
    }while(continuar);

    return 0;
}
