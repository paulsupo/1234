#include <iostream>
#include <cmath>
using namespace std;

bool esPrimo(long n)
{
    if (n < 2)
        return false;
    if (n == 2)
        return true;
    if (n == 3)
        return true;
    int k = 3;
    int z = (int)(sqrt(n) + 1);
    if (n % 2 == 0)
        return false;
    while ((n%k)!= 0){
        k += 2;
        if (k >= z)
            return true;}
    return false;}

int main(){
    long long contador1=0;
    long long a=0;
    for (int c=1;contador1<10001;c++){
        if (esPrimo(c)==true){
            contador1++;
            a=c;}}
    cout << a;
    return 0;}
