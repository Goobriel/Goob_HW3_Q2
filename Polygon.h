//
// Created by Gabep on 11/7/2021.
//

#ifndef GOOB_HW3_Q2_POLYGON_H
#define GOOB_HW3_Q2_POLYGON_H

class Polygon
{
public:
    Polygon();
    Polygon(int newWidth, int newHeight);
    void setWidth(int newWidth);
    void setHeight(int newHeight);
    virtual int getArea();
    virtual void draw() = 0; //user input
    virtual void exDraw() = 0;
protected:
    int width = 0;
    int height = 0;

};



#endif //GOOB_HW3_Q2_POLYGON_H
