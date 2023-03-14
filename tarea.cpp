#include<iostream>
#include<windows.h>
using namespace std;

/* 1) Diseñe la función que utilizando multiplicaciones sucesivas por 10, devuelva el total de cifras que tiene un número. Ejemplo:

Si el número es 2345, entonces tiene 4 cifras

Si el número es 3233, entonces tiene 4 cifras

si el numero es 100, entonces tiene 3 cifras

si el número es 78123, entonces tiene 5 cifras

si el número es 781230, entonces tiene 6 cifras

a) primera solución, usando varios if (hasta 10 cifras)/*/
void calcularCifra(double num){
	cout<<"hecho con sentencias de if"<<endl;
 if(num<10)
	{
	
		cout<<"cifras totales 1 "<<endl;
		
		
	}
	else
	 if(num<100)
	{
	
		cout<<"cifras totales 2 "<<endl;
		
		
	}
	
	else
	 if(num<1000)
	{
	
		cout<<"cifras totales 3 "<<endl;
		
		
	}
	else
	 if(num<10000)
	{
	
		cout<<"cifras totales 4 "<<endl;
		
		
	}else 
	if(num<100000)
	{
	
		cout<<"cifras totales 5 "<<endl;
		
		
	}
	else
	 if(num<1000000)
	{
	
		cout<<"cifras totales 6 "<<endl;
		
		
	}
	else
	 if(num<10000000)
	{
	
		cout<<"cifras totales 7 "<<endl;
		
		
	}
	else 
	if(num<100000000)
	{
	
		cout<<"cifras totales 8 "<<endl;
		
		
	}
	else 
	if(num<1000000000)
	{
	
		cout<<"cifras totales 9 "<<endl;
		
		
	}
	else 
	if(num<10000000000)
	{
	
		cout<<"cifras totales 10 "<<endl;
		
	
	}
	else{
		cout<<"el numero supero las 10 cifras"<<endl;
	}
	
	
	
}

/*b) podrías proponer una solución realizando divisiones sucesivas para 10 (algoritmo general)
Algoritmo:
1. Inicio
2. Declarar num y x como entero 
3. leer num
4. mientras num >0 hacer
	4.1 num/=10
		4.2 x++
5.finMientras
6. imprimir el numero de cifras es: ,x
7. fin*/
int saberCifras (int num){
	cout<<"hecho con bucle while con divisiones /10"<<endl;
double x=0;
	
	while(num>0){
		
		num/=10;
		x++;
	}
	cout<<"el numero tiene "<<x<<" cifras"<<endl;
return x;
	
}



//c) usando bucle while (multiplicaciones * 10)
int  digitosMult(double num){
	cout<<"hecho con bucle while(multiplicaciones *10)"<<endl;
	int cont=1;
	double mult=10;
	
	while(num>=mult){
		mult*=10;
			cont++;
		}
		
	
	cout<<"el numero tiene "<<cont<<" cifras"<<endl;

	return cont;

}
/*2) Diseñe la función que imprima los números primos comprendidos entre dos límites dados. Ejemplo:

si el límite inferior es 5 y el límite superior es 20, se imprimirán

5, 7, 11, 13, 17, 19*/
//Para saber si es primo:
bool esPrimo(int numero) {
 
  if (numero == 0  || numero == 4) {
    return false;
  }
  for (int x = 2; x < (numero / 2); x++) {
    if (numero % x == 0)
      return false;
  }
  return true;
}
void limitesPrimo(int n,int n2){
int x;
for(x=n;x<=n2;x++){
	
	if(esPrimo(x)==true){
		cout<<x<<endl;
	}
}	
}
/*3) Diseñar la función que devuelva la sumatoria de los N primeros números primos. Ejemplo, si

Si* N=7;  la sumatoria sería:  1 + 2 + 3 + 5 + 7 + 11 + 13*/
int sumatoriaPrimos(int num2){
	int suma;
	for(int x=1;x<=num2*2;x++){
	if(esPrimo(x)==true){
		cout<<x<<endl;
			suma+=x;
	}
	

}
cout<<"la suma es:"<<suma<<endl;
return suma;
}
void menu(){
	int op;
	do{
	
		int resp;
double num,n2,n3;
int sup, inf;

cout<<"Elige una opcion:"<<endl;
Sleep(500);
cout<<"1. Total de cifras de un numero mediante multiplicaciones sucesivas por sentencias if, while"<<endl;
Sleep(500);
cout<<"2. Numeros primos en un rango determinado "<<endl;
Sleep(500);
cout<<"3. Sumatoria de numeros primos mediante el ingreso de un numero"<<endl;
cin>>resp;
switch(resp){
	case 1:
		system("cls");
		cout<<"                     Cifras de un numero                "<<endl;
		cout<<"Ingrese un numero: "<<endl;
	cin>>num;
	cout<<"Ingrese otro numero: "<<endl;
	cin>>n2;
		cout<<"Ingrese otro numero: "<<endl;
	cin>>n3;
	
	saberCifras(num);
	calcularCifra(n2);
	digitosMult(n3);
		break;
		case 2:
			system("cls");
			cout<<"                    Rango de numeros pares              "<<endl;
				cout<<"Ingre los limites: "<<endl;
	cout<<"Inferior: "<<endl;
	cin>>inf;
	cout<<"Superior: "<<endl;
	cin>>sup;
limitesPrimo(inf,sup);
			break;
			case 3:
				system("cls");
				cout<<"                 Sumatoria de Numeros Primos                 "<<endl;
					int num2;
						cout<<"Ingrese un numero: "<<endl;
						cin>>num2;
		sumatoriaPrimos(num2);
	
		
				break;
				default:
					cout<<"Fuera de rango , ingrese una opcion entre el rango establecido"<<endl;
					break;
}
cout<<"Si desea continuar presione 1, si desea salir presione 2"<<endl;
cin>>op;	
}while(op==1);
cout<<"Gracias por interactuar con el programa"<<endl;	
}
	
int main(){
	system("color a");
cout<<"                     BIENVENIDO                      "<<endl;
menu();


	return 0;
}
