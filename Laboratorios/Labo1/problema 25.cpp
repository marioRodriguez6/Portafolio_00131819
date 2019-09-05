#include <iostream>
#include <cmath>
using namespace std;

struct complejos{
float rea;
float ima;
float vabs;
};

int main(){
    complejos cj;
cout<<"Digite la parte real del numero complejo: ";
cin>>cj.rea;

cout<<"Digite la parte imaginaria del numero complejo: ";
cin>>cj.ima;

cj.vabs = sqrt((cj.ima*cj.ima)+(cj.rea*cj.rea));

cout.precision(4);
cout<<"\nvalor absoluto del numero complejo es: "<<cj.vabs<<endl;

return 0;
}
