#include <iostream>
#include <cstdlib>
#include <stdio.h>

using namespace std;

int main()
{
    long long num;
    num=600851475143 ;
    printf("%d=", num);
    for (int i=2; num>1;i++){
        while (num%i==0){
            printf("%d * ", i);
            num/=i;
        }
    }
    return 0;
}
