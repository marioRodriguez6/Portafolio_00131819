#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

struct TNodo {
    int dato;
    struct TNodo *sig;
};
typedef struct TNodo Nodo;
Nodo *pInicio;

void insertar(int num) {
    Nodo *nuevo = new Nodo;
    nuevo->dato = num;
    nuevo->sig = NULL;

    if (pInicio == NULL){
        pInicio = nuevo;
    }
    else {
        Nodo *p = pInicio;
        Nodo *q = NULL;
        while (p != NULL) {
            q = p;
            p = p->sig;
        }
        q->sig = nuevo;
    }
}

void mostrar() {
    Nodo *s = pInicio;
    while (s != NULL) {
        cout << (s->dato) << endl;
        s = s->sig;
    }
}

void mostrarP() {
    Nodo *s = pInicio;
    while (s != NULL) {
        if ((s->dato) % 2 == 0) {
            cout << (s->dato) << endl;
        }
        s = s->sig;
    }
}

void mostrarI(Nodo *p) {
    Nodo *s = p;

    if (s != NULL){
        mostrarI(s->sig);
        cout << (s->dato) << endl;
    }
    else {
        return;
    }
}


void mostrarImpares() {
    Nodo *s = pInicio;

    while (s != NULL) {
        if ((s->dato) % 2 != 0)
            cout << (s->dato) << endl;
        s = s->sig;
    }
}

int main()
{
    int n, num, in = 1, fin = 100;
    cout << "Ingrese la cantidad de datos (0-100):";
    cin >> n;

    srand(time(NULL));
    for (int i = 0; i < n; i++) {
        num=rand()%(fin-in+1)+in;
        insertar(num);
    }
    cout<< "\nLos numeros de la lista son: "<<endl;
    mostrar();
    cout<< "\nLos pares en la lista son: "<<endl;
    mostrarP();
    cout<< "\nLos impares en la lista son: "<<endl;
    mostrarImpares();
    cout<< "\nLa lista invertida es: "<<endl;
    mostrarI(pInicio);

    return 0;
}
