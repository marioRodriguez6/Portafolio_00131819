#include <iostream>

using namespace std;

int recursiva (int num1, int num2){
if (num1==num2){
cout<<"\nfin"<<endl;
}

//Da los numeros naturales entre a y b
if (num1>num2){
    cout<<(num2++)<<endl;
    recursiva(num1,num2);
}
if(num2>num1){
    cout<<(num1++)<<endl;
    recursiva(num1,num2);
}
}
int main(){
    int num1=0; int num2=0;

    cout<<"Ingrese un numero entero a: ";
    cin>>num1;
     cout<<"Ingrese un numero entero b: ";
    cin>>num2;

   recursiva(num1,num2);
    return 0;
}
