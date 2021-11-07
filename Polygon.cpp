//
// Created by Gabep on 11/7/2021.
//

#include "Polygon.h"
#include <iostream>
using std::cout;
using std::endl;
using std::cin;


Polygon::Polygon()
{
    //ctor
}

Polygon::Polygon(int newWidth, int newHeight){
    width = newWidth;
    height = newHeight;

}


void Polygon::setWidth(int newWidth){
    width = newWidth;

}


void Polygon::setHeight(int newHeight){
    height = newHeight;

}

int Polygon::getArea() {
    width = height;
    return width * height;
}

void Polygon::draw() { //Takes in keyboard input
    cout << "BEep boop,wee woo wee woo... WEE WOO WEE WOO" << endl;
}

void Polygon::exDraw() { //User defined input
    cout << "Beep beep boop boop, boop bwap" << endl;
}