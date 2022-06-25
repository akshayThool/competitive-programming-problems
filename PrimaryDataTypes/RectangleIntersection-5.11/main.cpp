#include "rectInt.h"

int main(){
    struct Rectangle r1(2, 3, 1.2, 4.5);
    struct Rectangle r2(2, 3, 1.2, 3.4);
    struct Rectangle intersection = findAndGetIntersection(r1, r2);
    displayRectangle(intersection);
}
