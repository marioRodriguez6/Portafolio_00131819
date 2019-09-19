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


	while(!s.empty()){
      i = s.top();
      s.pop();
       	}

cout<<"ultimo digito: "<<i<<endl;

	return 0;
}
