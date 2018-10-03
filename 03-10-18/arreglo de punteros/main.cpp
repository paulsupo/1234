#include <iostream>

using namespace std;

int main()
{
    int x=10,y=20,z=30;
    int *arr[3];
    arr[0]=&x;
    arr[1]=&y;
    arr[2]=&z;
    cout<<**arr<<endl;





    int *ptr=&x;
    int **ptr2=&ptr;
    cout<<**ptr2<<endl;
    return 0;
}
