//TAREA
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
using namespace std;

const int intentosMax=2;

//FUNCION QUE DEVUELVA UN NUMERO ALEATORIO ENTRE 1 Y 30
int aleatorio(){
    int num;
    num=1+rand()%(6);
    return num;
}

void juegodados(){
	int res;
	 do{
    int dado1,dado2;	
	int intento=0;
	int totalDados;
    bool dadoGanador=false;
	
	cout<<" --------- BIENVENIDO AL JUEGO DE DADOS  --------- "<<endl; //MENSAJE DE BIENVENIDA

	while(dadoGanador==false && intento<intentosMax){
	intento++;
	Sleep(1000);
	cout<<"Intento numero:"<<intento << endl;
	Sleep(1000);

    //TIRAR DADOS
    int user;
	cout << "\nPRESIONA ENTER PARA TIRAR LOS DADOS ";
    cin >> user;
  	dado1 = aleatorio ();
    //DADO 1
    cout<<"\nDado 1: " << dado1<< endl;
        for(int i=1;i<=dado1;i++){
            cout<<"*";
        }
    Sleep(1500);
	dado2 = aleatorio ();
    //DADO 2
    cout<<"\nDado 2: " << dado2 << endl;
    for(int j=1;j<=dado2;j++){
    cout<<"*";
        }
	Sleep(1000);   
	totalDados=dado1+dado2;
    cout << endl;
    //COMPARACION DADOS
	if(totalDados==11){
      cout<<"FELICITACIONES LOS DADOS SUMAN 11" << endl;
  	  dadoGanador=true;
    }else if (dado1==dado2){
	  cout <<"FELICITACIONES LOS DADOS SON IGUALES" << endl;
  	  dadoGanador=true;
	}
}
    cout << endl;
if(dadoGanador==false){
	cout<<" HAZ PERDIDO" << endl;
}

cout<<"----------------------------------------------------"<<endl;
cout<<"1. VOLVER A JUGAR "<<endl;
cout<<"2. SALIR "<<endl;
cout<<"----------------------------------------------------"<<endl;
cin>>res;
cout<<"----------------------------------------------------"<<endl;
system("cls");

}while(res==1);
cout<<" GRACIAS POR JUGAR " << endl;
	Sleep(1200);
}

int main(){
    juegodados();
}