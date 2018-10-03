#include <iostream>

using namespace std;

int*ptrtofive(){
    int *x=new int;
    *x=5;
    return  x;
}



int main()
{
    int *p;
    if (true) {
        int x=5;
        p=&x;}
    cout<<*p<<endl;
    //imprime la direccion de memoria
    cout<<ptrtofive()<<endl;

    //para que pida el numero de elementos del arrglo
    int numItems;
    cout<<"Cuantos items?"<<endl;
    cin>>numItems;
    int *arr=new int [numItems];
    cout<<numItems;

    return 0;
}
