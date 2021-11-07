//
// Created by Gabep on 11/7/2021.
//

#ifndef GOOB_HW3_Q2_TRIANGLE_H
#define GOOB_HW3_Q2_TRIANGLE_H
#include "Polygon.h"

class Triangle: public Polygon {
public:
    Triangle();
    Triangle(int newWidth, int newHeight);
    void setWidth(int newWidth);
    void setHeight(int newHeight);
    int getWidth();
    int getHeight();
    int getArea();
    void draw();
    void exDraw();
    void displayArea();
private:

};


#endif //GOOB_HW3_Q2_TRIANGLE_H
