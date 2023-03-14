#include<iostream>
#include<windows.h>
using namespace std;
int limiteSuma(int n1, int n2){
		int suma,x;
	suma=0;
for(x=n1;x<=n2;x++){

		if(x%2!=0){
		
			suma=suma+x;
			cout<<x<<endl;
			Sleep(50);

			
	}
}

	cout<<"----------------------------------------------------------"<<endl;
		return suma;
}

int main(){
	int inicio, fin;
cout<<"inidique el inicio"<<endl;
cin>>inicio;
cout<<"inidique el limite"<<endl;
cin>>fin;
cout<<"----------------------------------------------------------"<<endl;
	cout<<"la suma de los numeros de "<<inicio<<" a "<<fin<<" es:"<<limiteSuma(inicio,fin)<<endl;


	
		return 0;	
}
