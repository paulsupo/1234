#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "Polygon.h"


class Rectangle:public Polygon{
    public:
        Rectangle(int a, int b);
        int area(void);
        void printarea();


    protected:
        int width,height;


};
#endif // RECTANGLE_H
