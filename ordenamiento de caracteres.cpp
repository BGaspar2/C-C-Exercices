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
       while(a[i] < pivote) i++; //Separando los valores menores al pivote
       while(a[j] > pivote) j--; //Separando los valores mayores al pivote
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
void ordenShellOptimizado(string a[], int n){//optimizado
    int i,j,inc;
    string temp;
    for(inc=1;inc<n;inc=inc*3+1);
    while(inc>0){
        for(i=inc;i<n;i++){
            j=i;
            temp=a[i];
            while((j>=inc)&&(a[j-inc].compare(temp)>0)){
                a[j]=a[j-inc];
                j=j-inc;
            }
            a[j]=temp;
        }
        inc=inc/2;
    }
}

int main(){
	string cad1="Maria";
	string cad2="Maria";
	int x=cad1.compare(cad2);
	int total=7;
	if(x>0)
	
	cout<<"La cadena "<<cad1<<" es mayor que "<<cad2;
	else if (x==0)
	cout<<"Las cadenas son iguales";
	else
		cout<<"La cadena "<<cad2<<" es mayor que "<<cad1;
	string nombres[]={"Soto Maria","Gonzalo Luis","Gaspar Bryan","Ramirez Andrea","Becerra Jorge","Plaza Daniela","Campos Andres"};
	ordenShellOptimizado(nombres,7);
	imprimirVector(nombres,7);
		string nombres2[]={"Trump Donald","Aguero Sergio","","Gracia Jose","Santos Jorge","Franklin Clinton","Phillips Trevor"};
	
	OrdenamientoQuicksort(nombres2,0,total-1);
		imprimirVector(nombres2,7);
	return 0;
}
