#include <iostream>
#include "Triangle.h"
#include "Polygon.h"
#include "Rectangle.h"
#include "PolygonArray.h"
using namespace std;

int main()
{
	Triangle a(4, 8);
	Triangle *ptr;
    Rectangle b(3, 4);
	Rectangle c(4, 6);
	Rectangle *ptr2;
	ptr2 = &b;
	ptr = &a;
	ptr->printarea();
	ptr2->printarea();
	Polygon arr[] = {a,b};
	int size = sizeof(arr) / sizeof(arr[0]);

    return 0;
}
