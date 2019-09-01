// 00131819 mario josue
#include <iostream>
using namespace std;

int main(){
float valores[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, mediana;//lo ordeney es un numero par asi que sume el primer dato y el ultimo dato,
                                                             //dandome como resultado la mediana.
mediana = ((valores[0] + valores[9])/2);

cout<<"mediana: "<<mediana<<endl;
return 0;
}
