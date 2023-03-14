#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
using namespace std;

void llenarVector(int vector[], int total){
	 
	 for(int c = 0; c < total; c++)
    {
      vector[c] = 1 + rand() % (5000);
      
    }
}
void imprimirVector(int vector[], int total){
	cout<<"\n Elementos del vector"<<endl;
	for(int i=0;i<total;i++)
	cout<<vector[i]<<" : ";
}
void intercambiar(int &a, int &b){
	int aux=a;
	a=b;
	b=aux;
}
void ordenSecuencial(int vector[],int total){
	for(int i=0;i<total;i++){
		for( int j=i+1;j<total;j++)
		{
			
		
		if(vector[i]>vector[j]){
			/*int aux=vector[i];
			vector[i]=vector[j];
			vector[j]=aux;*/
			intercambiar(vector[i],vector[j]);
			
		}
	}
	}
}
void ordenBurbuja(int v[], int n){
    int i=0,j=0;
    int aux;
    for(i=1;i<n;i++)
        for(j=0;j<(n-i);j++){
            if(v[j]>v[j+1]){
                aux=v[j];
                v[j]=v[j+1];
                v[j+1]=aux;
            }
        }
}
void burbujaMejorado(int arreglo[], int tamano)
{
    int comparaciones = tamano;
    bool termino = false;
    for (int i = 0; i<(tamano-1) ; i++)
    {
        if (termino)
            break;
        termino = true;
        for (int j = 0; j<comparaciones-1 ; j++)
            if(arreglo[j] > arreglo[j+1])
            {
                intercambiar(arreglo[j],arreglo[j+1]);
                termino = false;
            }
        comparaciones--;
    }
}
void ordenShell(int a[], int n){
    int ints,i,aux;
    bool band;
    ints=n;
    while(ints>1){
        ints=ints/2;
        band=true;
        while(band==true){
            band=false;
            i=0;
            while((i+ints)<n){
                if(a[i]>a[i + ints]){
                    aux=a[i];
                    a[i]=a[i + ints];
                    a[i + ints]=aux;
                    band=true;
                }
                i++;
            }
        }
    }
}
void ordenShell2(int a[], int n){//optimizado
    int i,j,inc;
    int temp;
    for(inc=1;inc<n;inc=inc*3+1);
    while(inc>0){
        for(i=inc;i<n;i++){
            j=i;
            temp=a[i];
            while((j>=inc)&&(a[j-inc].edad>temp.edad)){
                a[j]=a[j-inc];
                j=j-inc;
            }
            a[j]=temp;
        }
        inc=inc/2;
    }
}
//QUICK SORT RECURSIVO
//https://ronnyml.wordpress.com/2009/07/19/quicksort-en-c/
// Función para dividir el array y hacer los intercambios
int divide(int *array, int start, int end) {
    long left;
    long right;
    long pivot;
    long temp;
    pivot = array[start];
    left = start;
    right = end;
    // Mientras no se cruzen los índices
    while (left < right) {
        while (array[right] > pivot) {
            right--;
        }
        while ((left < right) && (array[left] <= pivot)) {
            left++;
        }
        // Si todavía no se cruzan los indices seguimos intercambiando
        if (left < right) {
            temp = array[left];
            array[left] = array[right];
            array[right] = temp;
        }
    }
    // Los índices ya se han cruzado, ponemos el pivot en el lugar que le corresponde
    temp = array[right];
    array[right] = array[start];
    array[start] = temp;
    // La nueva posición del pivot
    return right;
}
// Función recursiva para hacer el ordenamiento
void quicksort(int *array, int start, int end)
{
    int pivot;
    if (start < end) {
        pivot = divide(array, start, end);
        // Ordeno la lista de los menores
        quicksort(array, start, pivot - 1);
        // Ordeno la lista de los mayores
        quicksort(array, pivot + 1, end);
    }
}
void OrdenamientoQuicksort(int a[], int primerValor, int ultimoValor)
{
     int central, i, j, pivote;
     central= (primerValor+ultimoValor)/2; //Posicion central del arreglo
     pivote= a[central]; //Capturar el valor medio del arreglo
     i = primerValor;
     j = ultimoValor;

 

     do{
       //Separando en dos partes el arreglo
       while(a[i] < pivote) i++; //Separando los valores menores al pivote
       while(a[j] > pivote) j--; //Separando los valores mayores al pivote
       if(i<=j){
         int temporal;
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
void Insercion(int a[] , int n)
{
    int i,k,aux;
    for(i=0;i<=n-1;i++)
    {
        aux=a[i];
        k=i-1;
        while((k>=0) && (aux<a[k]))
        {
            a[k+1]=a[k];
            k=k-1;
        }
        a[k+1]=aux;
    }
}
double performancecounter_diff(LARGE_INTEGER *a, LARGE_INTEGER *b)
{
    LARGE_INTEGER freq;
    QueryPerformanceFrequency(&freq);
    return (double)(a->QuadPart - b->QuadPart) / (double)freq.QuadPart;
}

int main(){
	int total=20000;
	int vectorBur[total];
	int vectorBurMejorado[total];
	int vectorShell[total];	
	int vectorShell2[total];	
		int vectorQuickSort[total];
			int vectorQuickSort2[total];
					int vectorSecuencial[total];
					int vectorInser[total];
	srand(time(NULL));
	//llenarVector(vector,total);
		 for(int c = 0; c < total; c++)
    {
      int elemento= 1 + rand() % (5000);
      vectorBur[c]=elemento;
           vectorBurMejorado[c]=elemento;
           vectorShell[c]=elemento;
            vectorShell2[c]=elemento;	
            vectorQuickSort[c]=elemento;
             vectorQuickSort2[c]=elemento;
             vectorSecuencial[c]=elemento;
             vectorInser[c]=elemento;
    }
	//imprimirVector(vector,total);
	//ordenSecuencial(vector,total);
	//imprimirVector(vector,total);
	//ordenBurbuja(vector,total);
	//burbujaMejorado(vector,total);
	//ordenShell(vector,total);
	//imprimirVector(vector,total);
	//ordenShell2(vector,total);
	//quicksort(vector,0,total-1);
	//OrdenamientoQuicksort(vector,0,total-1);
	//	imprimirVector(vector,total);
	LARGE_INTEGER t_ini, t_fin;
double secs;
QueryPerformanceCounter(&t_ini);
burbujaMejorado (vectorBurMejorado,total);
QueryPerformanceCounter(&t_fin);
secs = performancecounter_diff(&t_fin, &t_ini);
cout<<"\nBurbuja Mejorado: Tiempo EJECUCION en milisegundos: "<<(secs*1000.0);

QueryPerformanceCounter(&t_ini);
ordenBurbuja (vectorBur,total);
QueryPerformanceCounter(&t_fin);
secs = performancecounter_diff(&t_fin, &t_ini);
cout<<"\nBurbuja: Tiempo EJECUCION en milisegundos: "<<(secs*1000.0);

QueryPerformanceCounter(&t_ini);
ordenShell (vectorShell,total);
QueryPerformanceCounter(&t_fin);
secs = performancecounter_diff(&t_fin, &t_ini);
cout<<"\nOrden Shell: Tiempo EJECUCION en milisegundos: "<<(secs*1000.0);

QueryPerformanceCounter(&t_ini);
ordenShell2 (vectorShell2,total);
QueryPerformanceCounter(&t_fin);
secs = performancecounter_diff(&t_fin, &t_ini);
cout<<"\nShell Optimizado : Tiempo EJECUCION en milisegundos: "<<(secs*1000.0);

QueryPerformanceCounter(&t_ini);
quicksort (vectorQuickSort,0,total-1);
QueryPerformanceCounter(&t_fin);
secs = performancecounter_diff(&t_fin, &t_ini);
cout<<"\nQuick Sort v1: Tiempo EJECUCION en milisegundos: "<<(secs*1000.0);

QueryPerformanceCounter(&t_ini);
OrdenamientoQuicksort (vectorQuickSort2,0,total-1);
QueryPerformanceCounter(&t_fin);
secs = performancecounter_diff(&t_fin, &t_ini);
cout<<"\nQuick Sort v2: Tiempo EJECUCION en milisegundos: "<<(secs*1000.0);

QueryPerformanceCounter(&t_ini);
ordenSecuencial (vectorSecuencial,total);
QueryPerformanceCounter(&t_fin);
secs = performancecounter_diff(&t_fin, &t_ini);
cout<<"\nOrden Secuencial: Tiempo EJECUCION en milisegundos: "<<(secs*1000.0);

QueryPerformanceCounter(&t_ini);
Insercion (vectorInser,total);
QueryPerformanceCounter(&t_fin);
secs = performancecounter_diff(&t_fin, &t_ini);
cout<<"\nInsercion: Tiempo EJECUCION en milisegundos: "<<(secs*1000.0);

	return 0;
}
