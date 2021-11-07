//
// Created by Gabep on 11/7/2021.
//

#include "Rectangle.h"
#include <iostream>
using std::cout;
using std::cin;
using std::endl;


Rectangle::Rectangle(): Polygon()
{
    //ctor
}

Rectangle::Rectangle(int newWidth, int newHeight): Polygon(newWidth, newHeight){
    width = newWidth;
    height = newHeight;

}


void Rectangle::setWidth(int newWidth){
    width = newWidth;

}

int Rectangle::getWidth() {
    return width;
}

int Rectangle::getHeight() {
    return height;
}

void Rectangle::setHeight(int newHeight){
    height = newHeight;

}

int Rectangle::getArea() {
    return width*height; //Returning area of a rectangle (A=w*h)
}

void Rectangle::draw() {
    cout << "Please enter height of rectangle: \n";
    cin >> height;
    cout << "Please enter width of rectangle: \n";
    cin >> width;
    cout << "Displaying rectangle: \n";
    for (int i = 1; i <=height; i++){
        for (int j = 1; j <= width; j++){
            cout << "*";
        }
        cout << endl;
    }

}

void Rectangle::displayArea() {
    cout << "Area of Rectangle: " << getArea() << endl;
}