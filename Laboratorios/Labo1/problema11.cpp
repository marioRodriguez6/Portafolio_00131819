#include <iostream>
using namespace std;

main(){
int m[5],r,i,pos;

for (i = 0; i < 5; i++) {
cout<<"Ingresa elemeto : ";

cin>>m[i]; 
}

r = m[0];
for (i = 0; i < 5; i++) {  

if (r < m[i])   {

     r = m[i];
   }

  }

cout<<"El valor maximo del arreglo es : "<<r<<endl;

return 0;
}


