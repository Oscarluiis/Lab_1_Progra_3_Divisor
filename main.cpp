#include <iostream>
#include <stdio.h>
using namespace std;
int main() {

    //Variables

    int dividendo=0;
    int divisor=0;

    cout<<"Ingrese el dividendo :";
    cin>>dividendo;

    cout<<"Ingrese el divisor :";
    cin>>divisor;

    if (dividendo % divisor == 0){
        cout<<"¡Division exacta! ";
    }else{
        cout<<"¡Division inexacta! ";
    }
return 0;

}
