#include <iostream>

using namespace std;

int a[8] = {1, 3, 4, 5, 17, 18, 31, 33};

int buscar(int x, int low, int high){
    if(low>high){
        return -1;
    }
    int mid = (low + high) / 2;
    if (x == a[mid]){
        return(mid);
    }
    if(x<mid){
        return buscar(x, low, mid-1);
}else{
return buscar(x, mid+1,high);
}
}

int main(){
int x, low = 0, high = 7, mid;

cout<<"digite el numero deseado: "; cin>>x;

cout<<"la posicion es: "<<buscar(x,low,high)<<endl;

return 0;
}
