
#include <iostream>
using namespace std;
int factorial(int numero){
   int i;
   long double fact=1;
   if(numero<40) 
   {
   	for (i = 1; i <= numero; i++){
         fact = fact*i;
         
   }
   cout<<"Factorial de "<<numero<<" es: "<<fact<<endl;
}
   else{
      cout<<"el numero es mayor a 40 ongrese otro numero "<<endl;
      }
   
   
   system("pause");
}
int main()
{
	factorial(3);
}
