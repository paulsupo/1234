#ifndef TRIANGLE_H
#define TRIANGLE_H
#include "Polygon.h"


class Triangle:public Polygon{
    public:
        Triangle(int a, int b);
        int area(void);
        void printarea();


    protected:
        int width,height;


};

#endif // TRIANGLE_H
