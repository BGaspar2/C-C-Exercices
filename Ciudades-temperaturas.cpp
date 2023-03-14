#include<iostream>
#include<string>
using namespace std;
//Para el orden de ciudades-temperaturas
void imprimirVector(string vector1[],string vector2[] ,int total){
	cout<<"\n Elementos del vector por orden Shell"<<endl;
	for(int i=0;i<total;i++)
	cout<<i+1<<" "<<vector1[i]<<" - "<<vector2[i]<<endl;
	

}
//Para el orden alfabetico de nombres por quicksort
void imprimirVector2(string vector[], int total){
	cout<<"\n Elementos del vector por Quicksort"<<endl;
	for(int i=0;i<total;i++)
	cout<<i+1<<" "<<vector[i]<<endl;
}
//c)Terminar ordenamiento quicksort para los nombres
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
/*a)Se pide diseñar la función que ordene alfabéticamente por ciudades sin olvidar la temperatura. Resultado esperado:

 Bogotá - 18

 Guayaquil - 20

 Quito - 17
 */
void ordenShellOptimizado(string a[],string b[], int n){//optimizado
    int i,j,inc;
    string ciudades;
    string temperaturas;
    for(inc=1;inc<n;inc=inc*3+1);
    while(inc>0){
        for(i=inc;i<n;i++){
            j=i;
            ciudades=a[i];
            temperaturas=b[i];
            while((j>=inc)&&(a[j-inc].compare(ciudades)>0)){
                a[j]=a[j-inc];
                 b[j]=b[j-inc];
                j=j-inc;
            }
            a[j]=ciudades;
             b[j]=temperaturas;
        }
        inc=inc/2;
    }
}
/*
b) diseñar la función que ordene por la temperatura de ascendentemente (conservando la ciudad). Resultado esperado:

 Quito - 17

 Bogota - 18

 Guayaquil - 20

 Usted debe utilizar el método de ordenación quicksort o shell
 */
void ordenShellOptimizado2(string a[],string b[], int n){//optimizado
    int i,j,inc;
    string ciudades;
    string temperaturas;
    for(inc=1;inc<n;inc=inc*3+1);
    while(inc>0){
        for(i=inc;i<n;i++){
            j=i;
            ciudades=a[i];
            temperaturas=b[i];
            while((j>=inc)&&(b[j-inc].compare(temperaturas)>0)){
                  	a[j]=a[j-inc];
				  b[j]=b[j-inc];
               
                j=j-inc;
            }
           a[j]=ciudades;
             b[j]=temperaturas;
              
        }
        inc=inc/2;
    }
}


int main(){
	// Ciudades
	string ciudades[]={"Guayaquil","Bogota","Quito","Madrird","Ibarra","New York","Los Angeles"};
	//Temperaturas
		string temperaturas[]={"20 Grados","18 Grados","17 Grados","16 Grados","15 Grados","21 Grados","22 Grados"};
	//Literal a
	ordenShellOptimizado(ciudades,temperaturas,7);
	imprimirVector(ciudades,temperaturas,7);
		//Literal b
		ordenShellOptimizado2(ciudades,temperaturas,7);
	imprimirVector(ciudades,temperaturas,7);
		//Literal c
	int total=7;
		string nombres2[]={"Trump Donald","Ortiz Sergio","Guerrero Luis","Vasco Alisson","Preciado Maria","Bayer Michael","Mosquera Daniel"};
	
	OrdenamientoQuicksort(nombres2,0,total-1);
		imprimirVector2(nombres2,7);
		

	return 0;
}
