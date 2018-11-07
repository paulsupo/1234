#include "PolygonArray.h"
#include "Polygon.h"
#include <iostream>

PolygonArray::PolygonArray(){
    this->size=0;
    this->points=new Polygon[size];}

PolygonArray::PolygonArray(const Polygon pts[],const int size){
    this -> size=size;
    this -> points= new Polygon[size];
    for(int i=0;i<size;i++){
        points[i]=pts[i];}}

PolygonArray::PolygonArray(PolygonArray &p){
    this->size=p.size;
    this->points= new Polygon[size];
    for(int i=0;i<size;i++){
        points[i]=p.points[i];
    }
}

void PolygonArray::resize(int newSize){
    Polygon *pts=new Polygon[newSize];
    int minsize=(newSize>size)?size:newSize;
    for (int i=0;i<minsize;i++)
        pts[i]=points[i];
    delete[] points;
    size=newSize;
    points=pts;
}

void PolygonArray::insert (const int pos,const Polygon &p ){
    resize(size+1);
    for (int i=size-1;i<pos;i--)
        points[i]=points[i-1];
    points[pos]=p;
    }

void PolygonArray :: remove ( const int pos ) {
    if( pos >= 0 && pos < size ) {
    for(int i = pos; i < size - 2; i++) {
        points [i] = points [i + 1];}
    resize ( size - 1);
    }}


void PolygonArray::push_back(const Polygon &p){
    resize(size+1);
    points[size-1]=p;
}

PolygonArray::~PolygonArray(){
    delete[] points;
}

