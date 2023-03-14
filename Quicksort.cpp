#include<iostream>
#include<string>
using namespace std;
void imprimirVector(string vector[], int total){
	cout<<"\n Elementos del vector"<<endl;
	for(int i=0;i<total;i++)
	cout<<vector[i]<<endl;
}
void OrdenamientoQuicksort(string a[], int primerValor, int ultimoValor)
{
     int central, i, j;
      string	  pivote;
     central= (primerValor+ultimoValor)/2; //Posicion central del arreglo
     pivote= a[central]; //Capturar el valor medio del arreglo
     i = primerValor;
     j = ultimoValor;

 

     do{
       //Separando en dos partes el arreglo
       while(a[i].compare(pivote)<0) i++; //Separando los valores menores al pivote
       while(a[j].compare(pivote)>0) j--; //Separando los valores mayores al pivote
       if(i<=j){
         string temporal;
         //Intercambio de valores
         temporal = a[i];
         a[i] = a[j];
         a[j] = temporal;
         i++;
         j--;
       }
     }while(i<=j);

 

     if (primerValor < j)
          OrdenamientoQuicksort(a, primerValor, j);
     if (i < ultimoValor)
          OrdenamientoQuicksort(a, i, ultimoValor);
}
int main(){

	int total=7;


		string nombres2[]={"Trump Donald","Ortiz Sergio","Guerrero Luis","Vasco Alisson","Preciado Maria","Bayer Michael","Mosquera Daniel"};
	
	OrdenamientoQuicksort(nombres2,0,total-1);
		imprimirVector(nombres2,7);
	return 0;
}
