#include "Rectangle.h"
#include "Polygon.h"
#include <iostream>
using namespace std;


Rectangle::Rectangle(int a,int b):width(a),height(b){}
int Rectangle::area(){
    return width*height;
}
void Rectangle::printarea(){
    cout<<this->area()<<endl;
}

