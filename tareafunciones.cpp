#include <iostream>
using namespace std;

//EJERCICIO 1
void cifras(double a){

  if(a<10)
    cout <<a<<" tiene 1 cifra" << endl;
 else if(a<100)
    cout <<a<<" tiene 2 cifras" << endl;
  else if(a<1000)
    cout <<a<<" tiene 3 cifras" << endl;
  else if(a<10000)
    cout <<a<<" tiene 4 cifras" << endl;
  else if(a<100000)
    cout <<a<<" tiene 5 cifras" << endl;
  else if(a<1000000)
    cout <<a<<" tiene 6 cifras" << endl;
  else if(a<10000000)
    cout <<a<<" tiene 7 cifras" << endl;
  else if(a<100000000)
    cout <<a<<" tiene 8 cifras" << endl;
  else if(a<1000000000)
    cout <<a<<" tiene 9 cifras" << endl;
  else if(a<10000000000)
    cout <<a<<" tiene 10 cifras" << endl;

    int ncifras=1;
    double multiplicacion=10;
    while(a>=multiplicacion){
      multiplicacion*=10;
      ncifras++;
    }
    cout <<a<<" tiene "<< ncifras <<" cifras"<< endl;

    //ALGORITMO CON DIVISION
      /*
      INICIO
        Leer numero
        mientras(numero>=10){
          numero/=10
          cifras++
        }
        Escribir "Las cifras del numero ingresado es: " cifras
      FIN
      */
  }

  //EJERCICIO 2
  bool Primo(int numero) {
    if (numero == 0 || numero == 1 || numero == 4) {
      return false;
    }
    for (int x = 2; x < numero / 2; x++) {
      if (numero % x == 0)
        return false;
    }
    return true;
  }

  void PrimoLimites(int inf, int sup){
      int x;
      for(x=inf;x<=sup;x++){
        if(Primo(x)==true)
          cout << x << " es primo" << endl;
      }
  }

  //EJERCICIO 3

  int sumatoriaPrimos(int a){
  int cont=0;
  cout << endl;
  for(int i=1;i<=a*2;i++){
    if(Primo(i)==true){
      cont+=i;
    }
  }
  return cont;
  }

  int main(){
    cifras(100);
    PrimoLimites(1,5);
    cout<<"La suma de los 4 primeros numeros primos es :" << sumatoriaPrimos(4);

  }
