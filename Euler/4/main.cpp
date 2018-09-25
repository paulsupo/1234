#include <iostream>
using namespace std;
bool isPalindrome(int prod){
    int numInv=0;
    while (prod>0){
        int resto=prod%10;
        prod/=10;
        numInv=numInv*10+resto;}
    if (prod==numInv)
        return true;
    else
        return false;
}

int main()
{
   int maxPalindrome=1;

   for (int n=100 ; n<1000 ; n++){
        for (int m=100 ; m<1000 ; m++){
            int prod=n*m;
            if (isPalindrome(prod)){
                if (prod>maxPalindrome){
                    maxPalindrome=prod;
                    }}}}cout<<maxPalindrome<<endl;

   return 0;
   }
