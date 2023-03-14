#include<iostream>
using namespace std;
main(){
	//if , while, do while
	//=, <=,<, >=,>, ==, !=
 int n1,n2,n3 ;
 cout<<"Programa para identificar mayor de tres numeros"<<endl;
cout<<"Ingrese el primer numero"<<endl;
 cin>>n1;
  cout<<"Ingrese el segundo numero"<<endl;
 cin>>n2;
  cout<<"Ingrese el tercer numero"<<endl;
 cin>>n3;
	if (n1>n2){
		
		if(n1>n3){
		cout<<"El mayor es: "<<n1<<endl;	
}
 }else if(n2>n3)
	{
		if(n2>n1){
		
	cout<<"El mayor es: "<<n2<<endl;
		}
	
 }else if(n3>n1){
 if(n3>n2){
		cout<<"El mayor es: "<<n3<<endl;
	}
}else {
	cout<<"Son iguales"<<endl;
}
system("PAUSE");
	return 0;
}
