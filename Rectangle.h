///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee_205_final_exam - EE 205 - Spr 2022
///
/// @file Rectangle.h
/// @version 1.0
///
/// @author Brayden Suzuki <braydens@hawaii.edu>
/// @date   13_May_2022
///////////////////////////////////////////////////////////////////////////////
#ifndef EE_205_FINAL_EXAM_RECTANGLE_H
#define EE_205_FINAL_EXAM_RECTANGLE_H

#include "Shape.h"

#pragma once


class Rectangle : public Shape {

public:
    Rectangle(double newLength, double newWidth) ;

    Rectangle();

    double getWidth() ;
    double getLength() ;
    double compute_area() override ;

protected:
    double length ;
    double width ;

};


#endif //EE_205_FINAL_EXAM_RECTANGLE_H
