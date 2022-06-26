#include "rectInt.h"

int main(){
    struct Rectangle r1(2, 3, 2, 2);
    struct Rectangle r2(1, 2, 2, 2);
    struct Rectangle intersection = findAndGetIntersection(r1, r2);
    displayRectangle(intersection);
}
