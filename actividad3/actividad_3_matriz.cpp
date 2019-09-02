#include<iostream>

using namespace std;

int main(){
    int m[2][3] = {{6,7,3},{4,9,1}};
    cout << "Posicion usando la formula." << endl; //nuestra formula para el ejercicio 1(00+i*20+j)
    cout << "\na[0][0]=100" << endl;
    cout << "a[2][1]=141" << endl;
    cout << "a[5][1]=201" << endl;
    cout << "a[1][10]=130" << endl;
    cout << "a[2][10]=150" << endl;
    cout << "a[5][3]=203" << endl;
    cout << "a[9][19]=299" << endl;

    cout<<"\nValidando la matriz [0][0] = *(*(matriz))"<<endl;//validaciones de las matrices por medio de if
    if(m[0][0]==*(*(m))){
        cout<<"Valida"<<" "<<m[0][0]<<" "<<*(*(m))<<endl;
    }
        else {
        cout<<"No es valida"<<endl;

    }
    cout<<"\nValidando la matriz [i][j] = *((*(matriz)) + (i * COLS + j))"<<endl;
    if(m[1][2]==*((*(m)) + (1 * 3+ 2))){
        cout<<"valida"<<" "<<m[1][2]<<" "<<*((*(m)) + (1 * 3+ 2))<<endl;
    }
        else {
        cout<<"No es valida"<<endl;

    }
      cout<<"\nValidando la matriz [i][j] = *(*(matriz + i) + j)"<<endl;
    if(m[1][2]==*(*(m + 1) + 2)){
        cout<<"valida"<<" "<<m[1][2]<<" "<<*(*(m + 1) + 2) <<endl;
    }
        else {
        cout<<"No es valida"<<endl;

    }
      cout<<"\nValidando la matriz [i][j] = *(matriz[i] + j)"<<endl;
    if(m[1][2]==*(m[1] + 2)){
        cout<<"valida"<<" "<<m[1][2]<<" "<<*(m[1] + 2)<<endl;
    }
        else {
        cout<<"No es valida"<<endl;

    }
      cout<<"\nValidando la matriz [i][j] = (*(matriz + i))[j]"<<endl;
    if(m[1][2]==(*(m + 1))[2]){
        cout<<"valida"<<" "<<m[1][2]<<" "<<(*(m + 1))[2]<<endl;
    }
        else {
        cout<<"No es valida"<<endl;

    }
    return 0;
}
