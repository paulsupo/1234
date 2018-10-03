#include <iostream>

using namespace std;

int suma(int a, int b){
    int res=a+b;
    return res;
}

int main()
{
    int z;
    int (*fp)(int, int);
    fp=suma;
    z=(*fp)(3,4);
    z=suma(3,4);
    cout<<z<<endl;
    return 0;
}
