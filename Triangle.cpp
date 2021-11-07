//
// Created by Gabep on 11/7/2021.
//

#include "Triangle.h"
#include <iostream>
using namespace std;
Triangle::Triangle(): Polygon()
{
    //ctor
}

Triangle::Triangle(int newWidth, int newHeight): Polygon(newWidth, newHeight){
    width = newWidth;
    height = newHeight;

}


void Triangle::setWidth(int newWidth){ //mutator function
    width = newWidth;

}


void Triangle::setHeight(int newHeight){ //mutator function
    height = newHeight;

}

int Triangle::getWidth() { //accessor function
    width = height*2-1;
    return width;
}

int Triangle::getHeight() { //accessor function
    return height;
}

int Triangle::getArea() {
    width = height*2-1; //width
    return ((width*height)/2); //return formula for area of a triangle (A = (h*b)/2 )
}

void Triangle::draw() {
    cout << "Please enter height of triangle: " << endl;
    cin >> height; //Using height as rows for triangle
    width = 2*height -1;
    cout << "Displaying triangle: \n";
    for (int i = 1; i <= height; i++){ //Height acts as amount of rows
        for (int j = 1; j <= width; j++){ //Nested for loop with width acting as amount of columns
            if (j >= height-(i-1) && j <= height+(i-1)){ //this algorithm tells the for loop when to
                cout << "*";            //print a star. By saying  j>=/j<= height-/+(i-1) we are saying to
            }                           //print (i*2-1)/2 number of stars on both sides of the center column
            else                        //of the matrice while the rest of the spaces in the matrice are filled
                cout << " ";            //with empty spaces to form the pyramid shape the triangle has.
        }
        cout << endl;
    }
}

void Triangle::exDraw() {
    cout << "Drawing Triangle...\n";
    cout << "Height: " << getHeight() << endl;
    cout << "Width: " << getWidth() << "\n(Note: for this to work, width = height * 2 - 1)" << endl;
    cout << "Displaying Triangle: \n";
    for (int i = 1; i <= height; i++){
        for (int j = 1; j <= width; j++)
            if (j >= height - (i - 1) && j <= height + (i - 1)){
                cout << "*";
            }
        else
            cout << " ";
        cout << endl;
    }
}

void Triangle::displayArea() { //Display function for area
    cout << "Area of Triangle is: " << getArea() << endl;
}