#include<iostream>
using namespace std;
//recursividad
//la funcion se llame asi mismo
//debe tener un punto de salida
//desventaja: -si no se diseña correctamente la funcion se puede ocasionar 
//un desbordamiento de memoria
//ejemplo factorial recursivo
double factorial(int n){
	if(n==1  || n==0){
		return 1;//salida de la funcion
	}
	return n*factorial(n-1);
}
//ejemplo sumatoria enteros
int sumatoria(int n){
	if(n==1  || n==0){
		return 1;//salida de la funcion
	}
	return n+sumatoria(n-1);
	
}
//ejericio tabla de multiplicar
void tabla(int n1,int n2){
    if (n2> 1) {
        tabla(n1,n2-1);    
    }
cout<<"tabla de: "<<n1<<" x "<<n2<<" = "<<(n1*n2)<<endl;
}

//ejercicio: diseñe la funcion recursiva que realize la sumatoria de los n primeros numeros enteros
int main(){
	/*double n;
	cout<<"ingrese un numero"<<endl;
	cin>>n;
	cout<<"funciones recursivas";
	cout<<"\n la sumatoria de numeros es ";
	cout<<sumatoria(n)<<endl;*/
	int n1,n2;
	cout<<"Bienveinido"<<endl;
	cout<<"Ingrese un numero"<<endl;
	cin>>n1;
	cout<<"Ingrese el numero de multiplicadores"<<endl;
	cin>>n2;
tabla(n1,n2);
	return 0;
	
}
