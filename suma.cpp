#include<iostream>
#include<windows.h>
using namespace std;
void sumatoriaNumeros(){
		int cont,suma;
	cont=1;
	suma=0;
	while(cont<=1000){
			suma=suma+cont;
			cout<<cont<<endl;
			Sleep(10);
					cont=cont+1;
	}

		cout<<"la suma es:"<<suma<<endl;
}
int main(){

sumatoriaNumeros();
	
		return 0;	
}
