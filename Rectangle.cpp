///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee_205_final_exam - EE 205 - Spr 2022
///
/// @file Rectangle.cpp
/// @version 1.0
///
/// @author Brayden Suzuki <braydens@hawaii.edu>
/// @date   13_May_2022
///////////////////////////////////////////////////////////////////////////////
#include "Rectangle.h"
#include <iostream>

using namespace std ;

Rectangle::Rectangle(double newLength, double newWidth) {
    if( newLength <= 0 ) {
        throw invalid_argument("Length and width must be greater than 0") ;
    }

    if( newWidth <= 0 ) {
        throw invalid_argument("Length and width must be greater than 0") ;
    }

    length =  newLength ;
    width = newWidth ;
}

double Rectangle::getLength() {
    return length ;
}

double Rectangle::getWidth() {
    return width ;
}

double Rectangle::compute_area() {
    double rectangle_area ;
    rectangle_area = length * width ;
    return rectangle_area ;
}

