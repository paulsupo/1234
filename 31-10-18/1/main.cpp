#include <iostream>
#include "Point.h"
#include "PointArray.h"

using namespace std;

int main()
{
    Point p(1,3);
    Point q(3,3);
    Point r(3,1);
    Point q2(5,6);

    Point arr[]={p,q,r};
    int size=sizeof(arr)/sizeof(arr[0]);
    PointArray pa2(arr,size);
    PointArray pa=pa2;

    cout<<pa.getSize()<<endl;
    pa.push_back(q2);
    pa.print();
    cout<<"\n";
    pa.insert(3,q);
    pa.print();
    cout<<"\n";
    pa.remove(2);
    pa.print();
    pa.clear();
    cout<<pa.getSize()<<endl;



    /*
    cout<<pa2.getSize()<<endl;
    pa2.print();
    pa2.clear();
    cout<<pa2.getSize()<<endl;*/
    return 0;
}
