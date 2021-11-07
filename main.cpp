#include <iostream>
#include "Polygon.h"
#include "Triangle.h"
#include "Rectangle.h"
using std::cout;
int main() {
    std::cout << "Hello, World!" << std::endl;

    //"Question 1" : //This error occurs when compiled due to Polygon being an abstract class
    //Polygon p;  //Polygon is now an abstract class because it has PURE virtual functions
                  //because it is an abstract class objects cannot be instantiated

    //"Question 2" : //This error occurs when compiled due to Polygon being an abstract class
    //Polygon p;  //Polygon is now an abstract class because it still has a PURE virtual function "virtual void draw() = 0"
                  //because it is an abstract class objects cannot be instantiated

    Polygon *tptr, *rptr;
    Triangle t,tEx(2,4);
    Rectangle r,rEx(2,4);
    tptr = &t;
    rptr = &r;
    tptr->draw();
    t.displayArea();
    rptr->draw();
    r.displayArea();
    cout << "Pre-defined Example for Trianlge and Rectangle Objs: \n";
    tEx.draw();
    tEx.displayArea();
    rEx.draw();
    rEx.displayArea();
    
    return 0;
}
