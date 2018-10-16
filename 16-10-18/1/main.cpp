#include <iostream>

using namespace std;

void swap(int *a, int *b){
    int temp=*a;
    *a=*b;
    *b=temp;}

bool compareAscending(int i,int j){
    return i>j;}
bool compareDescending(int j, int i){
    return i<j;}

void bubbleSort(int arr[],int n,bool(*fp)(int,int)){
    for(int i=0;i<n-1;i++)
        for (int j=0;j<n-1;j++)
            if ((*fp)(arr[j],arr[j+1]))
            swap(&arr[j],&arr[j+1]);}

void printArray(int arr[],int size){
    for(int i=0;i<size;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    }
/*
void seleccion(int array[],int length){
    for (int i=0; i<(length-2);i++){
        int mini=i;
        for (int j=i;j<=(length-1);j++){
            if (array[j]<array[mini])
                mini=j;}
        if (mini!=i){
            int c=array[i];
            array[i]=array[mini];
            array[mini]=c;}
            }}

void inversa(int array[],int length){
    for (int i=0; i>(length-2);i--){
        int maxi=i;
        for (int j=i;j>=(length-1);j--){
            if (array[j]<array[maxi])
                maxi=j;}
        if (maxi!=i){
            int c=array[i];
            array[i]=array[maxi];
            array[maxi]=c;}
            }}

*/
int main()
{
    int array[]={6,7,1,5,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr,n,compareDescending);
    printArray(arr,n)
    return 0;
}
