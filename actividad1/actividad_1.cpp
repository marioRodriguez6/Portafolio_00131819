//00131819 mario josue
#include <iostream>

using namespace std;

void calculos(int num, int *doble, int *triple){
	*doble=2*num;
	*triple=3*num;

	cout<<"Direccion del doble de 2: "<<&doble<<endl;//direcciones
	cout<<"Direccion del triple de 2: "<<&triple<<endl;
}

int main(){
	int numero=4, doble = 0, triple=0;
    calculos(numero,&doble,&triple);

	cout<<"El doble de 4 es : "<<doble<<endl;
	cout<<"El triple de 4 es : "<<triple<<endl;

	cout<<"Direccion del doble de 4: "<<&doble<<endl;// direcciones despues del cambio, sigue siendo igual
	cout<<"Direccion del triple de 4: "<<&triple<<endl;

	return 0;
	// los punteros nos ayudan a saber la direccion de donde se guarda lo que nosotros hacemos y tambien alterar el dato que se encuenra ahi
	//por lo cual es muy util.

	// es la misma direccion tanto del global que el local como podemos ver
}
