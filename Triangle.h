//
// Created by lewak on 16.06.2020.
//

#ifndef TASK5_TRIANGLE_H
#define TASK5_TRIANGLE_H


#include "AbstractFigure.h"
#include "Distanceble.h"

class Triangle : public AbstractFigure, Distanceble {

private:
    Point *a;
    Point *b;
    Point *c;

public:
    Triangle(Color *color, Point *a, Point *b, Point *c);

    Point *getA() const;

    Point *getB() const;

    Point *getC() const;

    double &perimeter() override;

    double &area() override;

    virtual ~Triangle();


};


#endif //TASK5_TRIANGLE_H
