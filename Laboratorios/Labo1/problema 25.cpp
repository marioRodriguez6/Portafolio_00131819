#include <iostream>
#include <cmath>

using namespace std;

int suma(int a, int b){
    if (b==0){

        //cout<<"b= "<<b<<" caso base"<<endl;

        return 1;
    }

    else{

        int z = pow(a,b);

        //cout<<"z= "<<z<<" b= "<<b<<" a= "<<a<<endl;

        return z+suma(a,b-1);
    }


}
int main(void) {
    int x=0, n=0;

    cout<<"ingrese el valor de x: "<<endl;
    cin>>x;
    cout<<"ingrese el valor de n:  "<<endl;
    cin>>n;

    //cout<<"la sumatoria es: "<<endl;
    int r = suma(x,n);
    cout<<"Resultado de la sumatoria es: "<<r<<endl;

    return 0;
}
