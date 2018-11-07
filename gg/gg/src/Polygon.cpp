#include "Polygon.h"
#include <iostream>
using namespace std;

Polygon::Polygon(){
    width=0;
    height=0;
}
Polygon::Polygon(int a,int b):width(a),height(b){}

int Polygon::area(void){
    return 0;
}

void Polygon::printarea(){
    cout<<this->area()<<endl;
}


