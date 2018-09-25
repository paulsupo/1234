#include <iostream>

using namespace std;

int main()
{
    int a,b,c,d;
    long long x=4000000;
    a=0;
    b=1;
    c=a+b;
    int suma=0;
    for(a;a<=x;){
        if (a%2==0)
            suma+=a;
        a=b+c;
        b=a+c;
        c=a+b;}
    cout<<suma;


    return 0;
}
