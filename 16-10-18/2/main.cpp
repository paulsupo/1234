#include <iostream>

using namespace std;

int *funcion(){
    int *ptr=new int;
    *ptr=5;
    return ptr;
}

int main()
{
    int *ptr=funcion();
    cout<<*ptr<<endl;
    return 0;
}
