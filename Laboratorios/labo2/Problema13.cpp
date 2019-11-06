#include <iostream>
#include <string>

using namespace std;

//La funcion recursiva siguente suma el resultado de sumar todos los numeros anteriores de n.
int function1(int n){
    if(n==0)
        return(0);

    return(n + function1(n-1));
}

int funct2(int n){
    int number = 0;
    int aux = 0;

    for(int i=0; i<=n; i++){
        number = i + aux;
        aux = number;
    }

    return(number);
}


int main (){
    int n;
    cout << "Ingresar n: "; cin >> n;

    cout <<"\nResultado de la primera funcion recursiva.: "<< function1(n) << endl;
    cout << "Ocupando una funcion iterativa.: " << funct2(n) << endl;

    return 0;
}
