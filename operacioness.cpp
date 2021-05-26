#include <iostream>
using namespace std;

int validar(int n){
do{
cout<<"Ingrese un numero que desee entre 10 y 20: ";
cin >> n;
if(n>=10 && n<=20) {
    cout<<"Numero valido \n";
}
else{
    cout<<"El numero ingresado es incorrecto!! \n";
    cout<<"Por favor ingrese un numero entre 10 y 20 \n";
    system("PAUSE");
    system("cls");//Limpiar pantalla
}
}while ((n<10)||(n>20));
        return(n);
}

int  main(){
    int n;
    cout<<validar(n);
}
