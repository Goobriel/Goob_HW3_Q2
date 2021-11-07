//God is greater, He is King of kings, the great I am, Lord Almighty.
//Thank You, God for today, for providing me with my daily bread, and all that you do.
//In Jesus name, amen.

#include <iostream>
#include "Polygon.h"
#include "Triangle.h"
#include "Rectangle.h"
using std::cout;
int main() {
    //"Question 1" :
    /*            //This error occurs when compiled due to Polygon being an abstract class
    //Polygon p;  //Polygon is now an abstract class because it has PURE virtual functions
                  //because it is an abstract class objects cannot be instantiated */

    //"Question 2" :
    /*            //This error occurs when compiled due to Polygon being an abstract class
    //Polygon p;  //Polygon is now an abstract class because it still has a PURE virtual function "virtual void draw() = 0"
                  //because it is an abstract class objects cannot be instantiated */
    /*Polygon *ptr; //Works
    //Triangle t;
    //ptr = &t;
    */
    Triangle t,tEx(2,4);
    Rectangle r,rEx(2,4);
    //"virtual void draw = 0" is for keyboard input
    t.draw();
    t.displayArea();
    r.draw();
    r.displayArea();
    //"virtual void draw = 0" is for user defined/mutated data;
    cout << "Pre-defined Example for Trianlge and Rectangle Objs: \n";
    tEx.exDraw();
    tEx.displayArea();
    rEx.exDraw();
    rEx.displayArea();
    tEx.setWidth(3), tEx.setHeight(5);
    rEx.setWidth(3), rEx.setHeight(5);
    tEx.exDraw();
    tEx.displayArea();
    rEx.exDraw();
    rEx.displayArea();
    return 0;
}
