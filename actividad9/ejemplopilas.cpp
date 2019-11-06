//eliminar dos datos de la pila y despues mostrar el del fondo con una funcion.
#include <iostream>
#include <stack>

using namespace std;

int fondoPila(stack<int> s){
    int devolver;
    while(!s.empty()){
        devolver = s.top();
        s.pop();
    }
    return devolver;
}

int main()
{
    stack<int> s;

    s.push(7);
    s.push(23);
    s.push(4);
    s.push(5);

    cout << "elementos en la pila: " << s.size() << endl;
    cout << "elemento superior de la pila: " << s.top() << endl;


    s.pop();
    s.pop();

    cout << "\nelementos en la pila(despues de eliminar 2): " << s.size() << endl;


    if (s.empty())
        cout << "\nLa pila esta vacia";
    else
        cout << "\nLa pila no esta vacia";

    //dando el elemento del fondo
    cout << "\nEl elemento del fondo es: " << fondoPila(s) << endl;


    return 0;
}
