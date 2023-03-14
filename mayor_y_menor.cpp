#include<iostream>
#include<windows.h>
using namespace std;
main(){
	//Declarando Variables
	/*
	n1=primeNumero
	n2=segundoNumero
	n3=tercerNumero
	mayor=numeroMasAlto
	menor=numeroMasBajo
	*/
	double n1,n2,n3,mayor,menor;
	system("color A");//cambiar color a la consola
	//Lectura de datos
	cout<<"Programa para identificar mayor y menor de tres numeros"<<endl;
	cout<<"Ingrese el primer numero: "<<endl;
	cin>>n1;
	cout<<"Ingrese el segundo numero: "<<endl;
	cin>>n2;
	cout<<"Ingrese el tercer numero: "<<endl;
	cin>>n3;
	//Comparaciones Mayor y Menor que 
	cout<<"Procesando, por favor espere......"<<endl;
	Sleep(1000);//hacer un retraso para enseñar el resultado
	if (n1>n2){
		if (n1>n3){
		mayor=n1;
		}else{
			mayor=n3;
		}
	}else {
		if(n2>n3){
			mayor=n2;
		}else{
			mayor=n3;
		}
	}
	cout<<"El mayor es: "<<mayor<<endl;
		Sleep(1000);
		
	if (n1<n2){
		if (n1<n3){
		menor=n1;
		}else{
			menor=n3;
		}	
	}else {
		if(n2<n3){
			menor=n2;
		}else{
			menor=n3;
		}
	}
	cout<<"El menor es: "<<menor<<endl;
system("PAUSE");
	return 0;
}
