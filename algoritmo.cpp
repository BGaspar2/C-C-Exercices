#include<iostream>
using namespace std;
	
int main (){
	int num;
	cout<<"ingrese un numero: "<<endl;
	cin>>num;
	int x=0;
	
	while(num>0){
		
		num=num/10;
		x++;
	}
	cout<<"el numero tiene "<<x<<" cifras"<<endl;
	
	return 0;
	
}
