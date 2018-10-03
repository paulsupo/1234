#include <iostream>

using namespace std;
void swapbyPP(int **ptr1,int **ptr2){
    int temp;
    temp=**ptr1;
    **ptr1=**ptr2;
    **ptr2=temp;
}

int main()
{
    int x=10,y=20;
    int *ptr1=&x;
    int *ptr2=&y;
    swapbyPP(&ptr1,&ptr2);
    cout<<x<<" "<<y<<endl;
    return 0;
}
