#include "Triangle.h"
#include "Polygon.h"
#include <iostream>
using namespace std;


Triangle::Triangle(int a,int b):width(a),height(b){}

int Triangle::area(){
    return width*height/2;
}
void Triangle::printarea(){
    cout<<this->area()<<endl;
}

