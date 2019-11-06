#include <iostream>
#include <string>

using namespace std;

struct  america_del_sur{
char capital[10];
char nombre[10];
};

struct  asia{
char capital[10];
char nombre[10];
};

struct  africa{
char capital[10];
char nombre[10];
};

struct  europa{
char capital[10];
char nombre[10];
};

struct  america_del_norte{
char capital[10];
char nombre[10];
};

int main (){
    america_del_sur c1[5];
    float habitantes[5];
    float totalhabitantes=0;
    float mayor1=0;


    cout<<"Digite 5 paises de america del sur."<<endl;
    for (int i=0; i<5; i++){
        cout<<"nombre del pais: ";
        cin.getline(c1[i].nombre,50);
    }
    for (int i=0; i<5; i++){
        cout<<"capital de "<<c1[i].nombre<<": ";
        cin.getline(c1[i].capital,50);
    }
    for (int i=0; i<5; i++){
        cout<<"habitantes de "<<c1[i].capital<<": ";
        cin>>habitantes[i];

    }
for (int i=0; i<5; i++){
        totalhabitantes +=habitantes[i];
    }
    cout<<"\ntotal de habitantes en America del sur: "<<totalhabitantes<<endl;
for (int i=0; i<5; i++){
    if (habitantes[i]>mayor1){
        mayor1= habitantes[i];
    }
}
cout<<"mayor cantidad de habitantes en una ciudad de A.Sur: "<<mayor1<<endl;

    asia c2[5];
     float habitantes2[5];
     float totalhabitantes2=0;
     float mayor2=0;


    cout<<"\nDigite 5 paises de Asia."<<endl;
    for (int i=0; i<5; i++){
        cout<<"nombre del pais: ";
        cin>>c2[i].nombre;
    }
    for (int i=0; i<5; i++){
        cout<<"capital del pais "<<c2[i].nombre<<": ";
        cin>>c2[i].capital;
    }
    for (int i=0; i<5; i++){
        cout<<"habitantes del pais "<<c2[i].nombre<<": ";
        cin>>habitantes2[i];

    }
for (int i=0; i<5; i++){
        totalhabitantes2 +=habitantes[i];
    }
    cout<<"\ntotal de habitantes en Asia: "<<totalhabitantes2<<endl;
for (int i=0; i<5; i++){
    if (habitantes2[i]>mayor2){
        mayor2= habitantes2[i];
    }
}
cout<<"mayor cantidad de habitantes en una ciudad de As: "<<mayor2<<endl;

    africa c3[5];
    float habitantes3[5];
    float totalhabitantes3=0;
    float mayor3=0;


    cout<<"\nDigite 5 paises de Africa."<<endl;
    for (int i=0; i<5; i++){
        cout<<"nombre del pais: ";
        cin>>c3[i].nombre;
    }
    for (int i=0; i<5; i++){
        cout<<"capital del pais "<<c3[i].nombre<<": ";
        cin>>c3[i].capital;
    }
    for (int i=0; i<5; i++){
        cout<<"habitantes del pais "<<c3[i].nombre<<": ";
        cin>>habitantes3[i];

    }
for (int i=0; i<5; i++){
        totalhabitantes3 +=habitantes3[i];
    }
    cout<<"\ntotal de habitantes en Africa: "<<totalhabitantes3<<endl;
for (int i=0; i<5; i++){
    if (habitantes3[i]>mayor3){
        mayor3= habitantes3[i];
    }
}
cout<<"mayor cantidad de habitantes en una ciudad de Af: "<<mayor3<<endl;

    europa c4[5];
    float habitantes4[5];
    float totalhabitantes4=0;
    float mayor4=0;


    cout<<"\nDigite 5 paises de Europa."<<endl;
    for (int i=0; i<5; i++){
        cout<<"nombre del pais: ";
        cin>>c4[i].nombre;
    }
    for (int i=0; i<5; i++){
        cout<<"capital del pais "<<c4[i].nombre<<": ";
        cin>>c4[i].capital;
    }
    for (int i=0; i<5; i++){
        cout<<"habitantes del pais "<<c4[i].nombre<<": ";
        cin>>habitantes4[i];

    }
for (int i=0; i<5; i++){
        totalhabitantes4 +=habitantes4[i];
    }
    cout<<"\nTotal de habitantes Europa: "<<totalhabitantes<<endl;
for (int i=0; i<5; i++){
    if (habitantes4[i]>mayor4){
        mayor4= habitantes4[i];
    }
}
cout<<"Mayor cantidad de habitantes en una ciudad de Eu: "<<mayor4<<endl;


    america_del_norte c5[5];
    float habitantes5[5];
    float totalhabitantes5=0;
    float mayor5=0;


    cout<<"\nDigite 5 paises de America del norte."<<endl;
    for (int i=0; i<5; i++){
        cout<<"nombre del pais: ";
        cin>>c5[i].nombre;
    }
    for (int i=0; i<5; i++){
        cout<<"capital del pais "<<c5[i].nombre<<": ";
        cin>>c5[i].capital;
    }
    for (int i=0; i<5; i++){
        cout<<"habitantes del pais "<<c5[i].nombre<<": ";
        cin>>habitantes5[i];

    }
for (int i=0; i<5; i++){
        totalhabitantes5 +=habitantes5[i];
    }
    cout<<"\nTotal de habitantes en America del norte: "<<totalhabitantes5<<endl;
for (int i=0; i<5; i++){
    if (habitantes5[i]>mayor5){
        mayor5= habitantes5[i];
    }
}
cout<<"Mayor cantidad de habitantes en una ciudad de A.N: "<<mayor5<<endl;

return 0;

}
