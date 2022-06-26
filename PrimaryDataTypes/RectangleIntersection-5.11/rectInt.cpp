#include "rectInt.h"

bool isRectangleIntersection(const Rectangle& rect1, const Rectangle& rect2){
    return (rect1.x <= (rect2.x + rect2.width)) && ((rect1.x + rect1.width) >= rect2.x)
            && (rect1.y <= (rect2.y + rect2.height)) && ((rect1.y + rect1.height) >= rect2.y);
}

Rectangle findAndGetIntersection(const Rectangle& rect1, const Rectangle& rect2){
    cout<<"Working on Rectangle Intersection\n";
    if(isRectangleIntersection(rect1, rect2)){
        return {std::max(rect1.x, rect2.x), std::max(rect1.y, rect2.y),
                    std::min(rect1.x + rect1.width - rect2.x, rect2.x + rect2.width - rect1.x),
                    std::min(rect1.y + rect1.height - rect2.y, rect2.y + rect2.height - rect1.y)};
    }
    return {0, 0, -1.0, -1.0};
}

void displayRectangle(const Rectangle& rect){
    cout<<"Rectangle(x="<<(rect.x)<<",y="<<(rect.y)<<",width="<<(rect.width)<<",height="<<(rect.height)<<")\n";
}
