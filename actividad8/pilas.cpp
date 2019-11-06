//opcion 1 (dejando la pila  vacia y mostrando el ultimo dato.)
#include <iostream>
#include <stack>
using namespace std;

int main(){
    int i = 0;
	stack<int> s;

	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);
	s.push(5);
	s.push(6);
	s.push(7);
    s.push(8);

    //1) dejando la pila vacia.
	while(!s.empty()){
      i = s.top();
      s.pop();
       	}
// 2) mostrando el ultimo dato jaja
cout<<"ultimo digito: "<<i<<endl;

	return 0;
}
