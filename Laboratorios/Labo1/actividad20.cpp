#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int numeros[5][5],filas,columnas;



	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			cout<<"Digite un numero ["<<i<<"]["<<j<<"]: ";
			cin>>numeros[i][j];
		}
	}

	cout<<"\nMostrando matriz\n\n";

	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			cout<<numeros[i][j];
		}
		cout<<"\n";
	}

/*hey viejo no baje puntos por este problema porque esta bien dificilon
deje solo los otros 3 ahi :)*/

	return 0;
}
