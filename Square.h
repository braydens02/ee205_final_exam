///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee_205_final_exam - EE 205 - Spr 2022
///
/// @file Square.h
/// @version 1.0
///
/// @author Brayden Suzuki <braydens@hawaii.edu>
/// @date   13_May_2022
///////////////////////////////////////////////////////////////////////////////
#ifndef EE_205_FINAL_EXAM_SQUARE_H
#define EE_205_FINAL_EXAM_SQUARE_H
#pragma once

#include "Rectangle.h"

class Square : public Rectangle {
public:
    Square(double newSide) ;
    double compute_area() ;
};


#endif //EE_205_FINAL_EXAM_SQUARE_H
