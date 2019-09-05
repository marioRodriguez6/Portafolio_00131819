#include <iostream>
#include <cmath>

using namespace std;

int sumatoria(int x, int i, int n){
if (i == 0){
    return 1;
}
if (n > 0){

int result = pow(x,i);

 return result + sumatoria(x, i, n-1);
}
}


int main(){
    int x = 0,i = 0,n = 0, result = 0;
cout<<"digite el coeficiente deseado: "; cin>>x;
cout<<"digite la potencia deseada: "; cin>>i;
cout<<"digite las veces que se realizara la sumatoria: "; cin>>n;

cout<<"\nla sumatoria es: "<<sumatoria(x,i,n)<<endl;

return 0;
}
