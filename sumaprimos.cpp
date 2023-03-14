#include<iostream>
using namespace std;

	//Programa de vectores
	bool esPrimo(int num){
	
		bool primo =true;
		int i=2;
		int suma;
	
		while(i<=num/2 && primo==true){
			if(num%i==0){
				
				primo=false;
				i++;
			}
	
		}
	
		return primo;
}
	int sumaPrimos(int num){
	
			int aux=0;
			for(int i=0;i<=num;i++){
				
			if(	esPrimo(i)==true){
				aux++;
			cout<<"Sumka es:"<<aux;
			}
			
			
			
		}
		
	}
		
	

		
	int main(){	
	int num;
		cout<<"Ingrese un numero:"<<endl;
		cin>>num;
		sumaPrimos(num);
	/*if(esPrimo(num)==true){
		
		cout<<"Es primo"<<endl;*/
		/*
	}else {
		cout<<"No es primo"<<endl;
		
	}*/
	
	
	
	return 0;
}
