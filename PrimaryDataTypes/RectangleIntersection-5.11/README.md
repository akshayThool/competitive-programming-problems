# Rectangle Intersection

### Problem Statement

Write a program which tests if two rectangles have a non-empty intersection. If the intersection is non-empty, return the rectangle formed by their intersection.

### Solution

Create a Rectangle Struct

```

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

```

