#include <iostream>
#include <math.h>
int sumaCuadrados(){
    int suma=0;
    for (int i=1;i<101;i++){
        suma+=pow(i,2);}
    return suma;
    }

int cuadradosSuma(){
    int suma=0;
    for (int i=1;i<101;i++){
        suma+=i;}
    suma=pow(suma,2);
    return suma+1;}

using namespace std;

int main()
{
    int x,y;
    x=sumaCuadrados();
    y=cuadradosSuma();
    cout<<y-x<<endl;
    return 0;
}
