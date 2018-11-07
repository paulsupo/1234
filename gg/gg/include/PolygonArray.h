#ifndef POLYGONARRAY_H
#define POLYGONARRAY_H
#include "Polygon.h"


class PolygonArray
{
    public:
        PolygonArray();
        PolygonArray(const Polygon pts[],const int size);
        PolygonArray(PolygonArray &o);
        ~PolygonArray();
        void insert(const int pos,const Polygon &p);
        void push_back(const Polygon &p);
        void remove(const int pos);

    protected:
        int size;
        Polygon *points;
        void resize(int);
};

#endif // POLYGONARRAY_H
