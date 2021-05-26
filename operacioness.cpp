
#include <iostream>
using namespace std;

int validar(int n){
    cout<<"Ingrese un numero que desee entre 10 y 20: ";
cout<<"\nIngrese 0 para finalizar\n";
do{
cin >> n;
if(n>10 & n<20) {
    cout<<"Numero valido \n";
}  else{
    cout<<"El numero ingresado es incorrecto!! \n";
    cout<<"Por favor ingrese un numero entre 10 y 20 \n";

}
}while (n !=0);

}
int  main(){
    int n=0;
    validar(n);
}

