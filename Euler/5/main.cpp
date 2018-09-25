#include <iostream>

using namespace std;
bool Divisibilidad (int a){
        if ((a%2==0)&&(a%3==0)&&(a%4==0)&&(a%5==0)&&(a%7==0)&&( a%8==0)&&(a%9==0)&&(a%10==0)){
            if ((a%11==0)&&(a%13==0)&&(a%14==0)&&(a%16==0)&&(a%17==0)&&(a%18==0)&&(a%19==0)&&(a%20==0))
                return true;}
        return false;
        }
int main()
{
    long long a;
    bool b;
    b=true;
    a=1;
    while (b){
        if (Divisibilidad(a))
            b=false;
        else
            a++;
    }
    cout << a;
    return 0;
}
