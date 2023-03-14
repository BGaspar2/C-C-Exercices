#include<iostream>
#include<windows.h>
using namespace std;
void sumatoriaNumeros(){
		int cont,suma,cuadradoNum;
	cont=2;
	suma=0;
	while(cont<=50){
		cuadradoNum=cont*cont;
			suma=suma+cuadradoNum;
			cout<<"El cuadrado de "<<cont<<" es :"<<cuadradoNum<<endl;
			Sleep(50);
					cont=cont+1;
	}

		cout<<"La suma de los cuadrado entre 2 a 50 es:"<<suma<<endl;
}
int main(){

sumatoriaNumeros();
	
		return 0;	
}
