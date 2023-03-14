#include<iostream>
/* 
paso de parametros por valor: pasar copia de la variable a la funcion
cualquier cambio no afecta a la original
por referencia:  se pasa la direccion de memoria de la variable(original)
cualquier cambio que sufra se refleja en la varible principal
*/	
using namespace std;
void pasosPorValor(int a){
a+=10;
cout<<"El valor de la variable a dentro de la funcion : "<<a<<endl;	
	
}
void pasosPorReferencia(int &a){
	a+=10;
	cout<<"El valor de la variable a dentro de la funcion : "<<a<<endl;	
}
void intercambiarParametros(int &n1, int &n2){
	int n3=n1;
	
	n1=n2;
	n2=n3;
}
int main (){
/*int num=22;
pasosPorValor(num);	
cout<<"El valor de a en el main : "<<num<<endl;
int a=22;
pasosPorReferencia(a);	
cout<<"El valor de a en el main : "<<a<<endl;
cout<<"El valor en la funcion : "<<a<<endl;
*/
int n1=10, n2=20;
cout<<"El valor intercambiado es : "<<n1 <<" y "<<n2<<endl;

intercambiarParametros(n1,n2);
cout<<"El valor intercambiado es : "<<n1 <<" y "<<n2<<endl;

	
	
}
