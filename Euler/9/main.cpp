#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int a = 0, b = 0, c = 0;
    int s = 1000;
    bool found = false;
    for (a = 1; a < s / 3; a++) {
        for (b = a; b < s / 2; b++) {
            c = s - a - b;

            if (a * a + b * b == c * c) {
                found = true;
                break;}}

    if (found) {
        break;}
}cout<<a<<","<<b<<","<<c<<endl;
cout<<a*b*c<<endl;
    return 0;
}
