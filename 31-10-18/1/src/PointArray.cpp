#include "PointArray.h"
#include <iostream>

PointArray::PointArray()
{
    this -> size=0;
    this -> points= new Point[size];
}

PointArray::PointArray(const Point pts[],const int size){
    this -> size=size;
    this -> points= new Point[size];
    for(int i=0;i<size;i++){
        points[i]=pts[i];
    }
}


PointArray::PointArray(PointArray &o){
    this->size=o.size;
    this->points= new Point[size];

    for(int i=0;i<size;i++){
        points[i]=o.points[i];
    }

}
void PointArray::resize(int newSize){
    Point *pts=new Point[newSize];
    int minsize=(newSize>size)?size:newSize;
    for (int i=0;i<minsize;i++)
        pts[i]=points[i];
    delete[] points;
    size=newSize;
    points=pts;
}

void PointArray::push_back(const Point &p){
    resize(size+1);
    points[size-1]=p;
}

void PointArray::insert(const int pos,const Point &p){
    resize(size+1);
    for (int i=size-1;i<pos;i--)
        points[i]=points[i-1];
    points[pos]=p;
}


void PointArray :: remove ( const int pos ) {
    if( pos >= 0 && pos < size ) {
    for(int i = pos; i < size - 2; i++) {
        points [i] = points [i + 1];}
    resize ( size - 1);
    }
}


void const PointArray::print(){
    for (int i=0;i<size;i++)
        points[i].print();
}
void PointArray::clear(){
    resize(0);}

int const PointArray::getSize(){
    return size;
}

Point * PointArray :: get( const int pos) {
 return pos >= 0 && pos < size ? points + pos : NULL ;
 }

 const Point * PointArray :: get( const int pos) const {
 return pos >= 0 && pos < size ? points + pos : NULL ;
 }

PointArray::~PointArray()
{
   delete[] points;
}
