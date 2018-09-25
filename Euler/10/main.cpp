#include <iostream>

using namespace std;

int main()
{
    long long  i;
    long long  x;
    long long  y;
    bool primo;
    long long  sum=0;
    cin>>y;
    for (i=2;i<y;i++){
        x=2;
        primo=true;
            while (primo && x<i){
                if (i%x==0){
                    primo=false;}
                else {
                    x++;}
            }
            if (primo)
                sum+=i;
            }cout<<sum;

    return 0;
}
