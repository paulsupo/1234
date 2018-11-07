#ifndef POLYGON_H
#define POLYGON_H


class Polygon
{
    public:
        Polygon();
        Polygon(int a, int b);
        int area(void);
        void printarea();


    protected:
        int width,height;


};

#endif // POLYGON_H
