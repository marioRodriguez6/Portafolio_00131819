#include <iostream>
#include <vector>
using namespace std;

struct pedido{
    int revueltas;
    int frijolconqueso;
    int queso;
    bool arroz;
};
typedef struct pedido pedido;

pedido solicitarpedido(){
    int num;
    pedido p;
    cout << "Revueltas: "; cin >> p.revueltas;
    cout << "Frijol con queso: "; cin >> p.frijolconqueso;
    cout << "Queso: "; cin >> p.queso;
    cout << "las quiere de maiz (0) o de arroz(1): "; cin>>num;
      if(num==1)
      p.arroz=true;
      else if(num==0)
      p.arroz=false;
      else{
      cout<<"Digite un valor valido!"<<endl;
      }
    return p;
}

void mostrarpedido(pedido p){
    cout<<"Su pedido es: "<<endl;
    cout << "Revueltas: " << p.revueltas<< endl;
    cout << "Frijol con queso: " << p.frijolconqueso << endl;
    cout << "Queso: " << p.queso << endl;
      if(p.arroz==false)
      cout<<"Masa principal: Maiz"<<endl;
      else
      cout<<"Masa principal: Arroz"<<endl;

}

vector<pedido> lista;

void agregarpedido(){
    pedido p = solicitarpedido();
    bool continuar = true;
    do{
        int opcion = 0;
        cout << "\t1) Al principio\n\t2) Al final"
            << "\n\tOpcion elegida: ";
        cin >> opcion;
        switch(opcion){
            case 1: lista.insert(lista.begin(), p);
                continuar = false;
            break;
            case 2: lista.push_back(p);
                continuar = false;
            break;
            default: cout << "Opcion erronea!" << endl;
            break;
        }
    }while(continuar);
}

void mostrarLista() {
    for (int i = 0; i < lista.size(); i++)
        mostrarpedido(lista[i]);
}

int main(){
    int cont=0;
    cout << "Inicializando..." << endl;

    bool continuar = true;
    do{
        int opcion = 0;
        cout << "Menu: \n\t1) Agregar pedido\n\t2) Ver pedidos"
            << "\n\t3) Salir\n\tOpcion elegida: ";
        cin >> opcion;
        switch(opcion){
            case 1: cout << "Agregando..." << endl;
                    agregarpedido();
            break;
            case 2: cout << "Listando..." << endl;
                mostrarLista();
            break;
            case 3: continuar = false;
            break;
            default: cout << "Opcion erronea!" << endl;
            break;
        }
    }while(continuar);

    return 0;
}
