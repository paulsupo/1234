#ifndef POINTARRAY_H
#define POINTARRAY_H
#include "Point.h"

class PointArray
{
    public:
        PointArray();
        PointArray(const Point pts[],const int size);
        PointArray(PointArray &o);
        ~PointArray();

        void print();
        int getSize();
        void clear();
        void push_back(const Point &p);
        void insert(const int pos,const Point &p);
        void remove(const int pos);
        Point *get( const int pos);
        const Point *get( const int pos) const ;


    private:
        int size;
        Point *points;
        void resize(int);
};

#endif // POINTARRAY_H
