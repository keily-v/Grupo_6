
#include <iostream>
using namespace std;

int validar (int n){
    cout<<"Ingrese un numero: ";cin>>n;
    if (n>10 && n<20){
        cout<<"Numero Valido";}
    else{
    cout<<"Numero Invalido";}

}

int  main(){
    int n=0;
    //
    validar(n);
}

