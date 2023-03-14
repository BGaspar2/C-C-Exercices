#include <iostream>
using namespace std;
// Funcion que recibe como parametro un entero e imprime su tabla de multiplicacion del 1 al 10
int tablaNumero(int tabla){
int x, multiplicacion=0;
    for(x=1;x<=10;x++) {
        multiplicacion = x * tabla;
        cout << tabla << " X " << x << " = " << multiplicacion << endl;
    }
    return multiplicacion ;
}
//Funcion que imprime las 10 primeras tablas de multiplicar
void tabla2(){
    for(int i=1;i<=10;i++){
        cout << "Tabla del " << i << ":" << endl;
        tablaNumero(i);
        cout<<"-------------------------------------------------------"<<endl;
    }


}
int main() {
    cout<<"TABLAS DE MULTIPLICAR"<<endl;
                tabla2();
    cout<<"Tabla ingresada por parametro: "<<endl;
                tablaNumero(7);

    return 0;
}
