#include <iostream>

using namespace std;

int main(){
    int x,a=1,c=0;
    cin>>x;
    while (a<x){
        if ((a%3==0)||(a%5==0)){
            c+=a;
            a++;
        }
        else{
            a++;
        }
    }
   cout<<c<<endl;
    return 0;
}
