//Mario Josue Rodriguez Miguel #00131819 secc. 02
#include <iostream>
using namespace std;

bool isFull(int n, int m, int frente){
    if((n)%m == frente){
        cout << "\n**La Cola esta llena!" << endl;
        return true;
    }else{
        return false;
    }
}

void insertElement(int *cola, int *n, int m, int *frente){
    if(isFull(*n, m, *frente)){
        return;
    }else if(*frente == -1){
        *frente = 0;
    }
    (*n) = (*n) % m;

    int number;
    cout << "\n*Ingresa un numero: "; cin >> number;
    cola[(*n)] = number;
    (*n)++;
}

void throwElement(int *cola, int *n, int m, int *frente){
    if(*n == 0 && *frente == -1){
        cout << "\n**Esta vacia: OVERFLOW" << endl;
        return;
    }
    cout << "\n*Sacando: " << cola[*frente] << endl;
    cola[*frente] = 0;
    *frente = (*frente + 1)%m;

    if(*frente == *n){
        *frente = -1;
        *n = 0;
    }
}

int main(){
    int cola[5] = {};
    int n, maximo, frente;
    maximo = 5;
    n = 0;
    frente = -1;

    while(true){
        int f=0;

        cout << "La cola Actualmente:" << endl;
        for(int i=0; i < 5; i++){
            cout << cola[i] << " ";
        }
        cout << endl;
        cout << "\n1) Meter un elemento" << endl;
        cout << "2) Sacar un elemento" << endl;
        cout << "3) Terminar"<<endl;
        cout << "Opcion escogida: ";
        cin >> f;
        if(f == 1){
            insertElement(cola, &n, maximo, &frente);
        }else if(f == 2){
            throwElement(cola, &n, maximo, &frente);
        }else if(f == 3){
            break;
        }
        cout << endl;
    }
    return 0;
}
