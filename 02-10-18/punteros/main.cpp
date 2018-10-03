#include <iostream>

using namespace std;
/*int suma(int *arr, int tam){
    int res=0;
    for (int i=0;i<tam;i++,arr++)
        res+=*arr;
    return res;}*/

void suma(int *arr,const int tam){
    int *ptr=arr+tam-1;
    while (ptr>arr){
        int temp=*ptr;
        *ptr--=*arr;
        *arr++=temp;}
}

void burbuja(int *arr){
    int *ptr=arr+1;
    int *ptr1=ptr+1;
    for(;*arr<*ptr;arr++,ptr--){
                int temp=*ptr;
                *ptr--=*arr;
                *arr++=temp;
            }
    }


void print (int *arr,int tam){
    if (tam==0)
        return;
    cout<<*arr++<<" ";
    print (arr,--tam);
}

int len(char *cad){
    int len=0;
    while (*cad++!='\0')
        len++;
    return len;}



int main()
{
    int arr[]={4,2,10,30,20,6};
    char cadena[] = "ciencia";
    int *ptr=arr;
    ptr++;
    cout<<len(cadena)<<endl;
    //no puedes modificar el puntero
    //arr++;
    //sin parentesis suma el valor, con parentesis suma el indice//
    burbuja(arr);
    print(arr,6);

    return 0;
}
