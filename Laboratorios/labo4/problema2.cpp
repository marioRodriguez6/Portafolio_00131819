#include <iostream>
#include <cmath>
using namespace std;

struct Nodo{
    float exp;
    float coeficiente;
    Nodo *sig;
};

Nodo *P_inicio = NULL;

float suma(Nodo *Next){
    if(Next) {
        return pow(Next->coeficiente, Next->exp) + suma(Next->sig);
    }
    else {
        return 0;
    }
}

int main()
{
    float Exponente= -1, Coeficiente= -1;
    bool continuar = true;
    cout << "Ingrese Coeficiente y Exponente" << endl;

    while(continuar){
        cout << "\nCoeficiente: ";
        cin >> Coeficiente;
        cout << "Exponente: ";
        cin >> Exponente;

        Nodo *nuevo = new Nodo;
        nuevo->coeficiente = Coeficiente;
        nuevo->exp = Exponente;

        nuevo->sig = P_inicio;
        P_inicio = nuevo;
        cout << "\nDesea insertar otro numero?" << endl;
        cout << "1) Si." << endl;
        cout << "0) No." << endl;
        cin >> continuar;
    }
    cout << "La suma es: " << suma(pinicio);
}
