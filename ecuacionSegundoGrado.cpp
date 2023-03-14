#include<iostream>
#include<math.h>
#include<windows.h>
using namespace std;
void ecuacionSegundoGrado(double a, double b, double c, double &x1, double &x2){
double d;//discriminante
	if (a!=0){
		Sleep(500);
cout<<"Realizando operacion..."<<endl;
	Sleep(1000);
d=sqrt(b*b-(4*a*c));
if (d>0)
{
x1=((b*-1)+(d))/(2*a);
x2=((b*-1)-(d))/(2*a);
	
	
}else 
{
	cout<<"el determinante es menor a 0 por lo tanto no tiene solucion real"<<endl;
}
}else{

 cout<<"No es posible realizar la operacion"<<endl;
  }

}
int main(){
	system("color a");
	double a=5;
	double b=-6;
	double c=-1;
	double x1=0;
	double x2=0;
	cout<<"Bienvenido al programa para saber el resultado de una ecuacion cuadratica"<<endl;
		cout<<"valor de a:"<<a<<endl;
			cout<<"valor de b:"<<b<<endl;
				cout<<"valor de c:"<<c<<endl;
	ecuacionSegundoGrado(a,b,c,x1,x2);
	cout<<"El resultado de x1 es: "<<x1<<endl;
			Sleep(1000);
		cout<<"El resultado de x2 es: "<<x2<<endl;
		
	return 0;
	
	
	
}
