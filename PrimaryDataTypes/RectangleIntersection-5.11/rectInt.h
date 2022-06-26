#ifndef RECTINT_H
#define RECTINT_H
#include<iostream>
#include<algorithm>

using namespace std;

struct Rectangle{
    int x, y;
    double width, height;
    Rectangle(int xValue, int yValue, double wValue, double hValue){
        x = xValue;
        y = yValue;
        width = wValue;
        height = hValue;
    }
};

Rectangle findAndGetIntersection(const Rectangle&, const Rectangle&);
void displayRectangle(const Rectangle& rect);

#endif // RECTINT_H
