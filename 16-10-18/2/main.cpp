#include <iostream>

using namespace std;

int *funcion(){
    int *ptr=new int;
    *ptr=5;
    return ptr;
}

int main()
{
    int n;
    cin>>n;
    int *ptr=new int[n];
    for (int i=0;i<n;i++){
        cin>>ptr[i];}
    for (int i=0;i<n;i++){
        cout<<ptr[i]<<" ";
      }
    delete[] ptr;
    return 0;
}
