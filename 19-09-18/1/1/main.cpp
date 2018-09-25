#include <iostream>

using namespace std;

int suma (const int array[], const int length){
    int sum=0;
    for (int i=0; i<length; sum+=array[i++]);
    return sum;}


int mayor(const int array[], const int length){
    int may=array[0];
    for (int i=0; i<length;i++){
        if (array[i]>may)
            may=array[i];}
    return may;}


bool EsPrimo(int x){
        int b;
        int c;
        c=0;
        for(b=1;b<=x;b++)
            {if(x%b==0)
                c++;}
        if (c>2)
            return false;
        else
            return true;
            }

int primo(const int arr[],const int len){
        int ContPrimo;
        int i;
        ContPrimo=0;
        for (i=0;i<len;i++){
                    if (EsPrimo(arr[i]))
                            ContPrimo++;
                            }
        return ContPrimo;
        }


void seleccion(int array[],int length){
    for (int i=0; i<(length-1);i++){
        int mini=i;
        for (int j=1;j<=(length);j++){
            if (array[j]<array[i])
                mini=j;
        if (mini!=i)
            array[i]=array[mini];
            }}}
int main(){
    int array[]={6,7,1,5,4};
    cout << "Su suma es: "<<suma(array,5)<<endl;
    cout << "El mayor es: "<<mayor(array,5)<<endl;
    cout << "El numero de primos es: "<<primo(array,5)<<endl;
    seleccion(array,5);
    for (int i=0;i<=5;i++){
        cout<< array[i]<<" , ";
    }

    return 0;
}
