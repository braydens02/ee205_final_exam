///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee_205_final_exam - EE 205 - Spr 2022
///
/// @file Square.cpp
/// @version 1.0
///
/// @author Brayden Suzuki <braydens@hawaii.edu>
/// @date   13_May_2022
///////////////////////////////////////////////////////////////////////////////
#include "Square.h"

Square::Square(double newSide) {
    Rectangle rectangle(newSide,newSide) ;
}

double Square::compute_area() {
    return Shape::compute_area();
}

