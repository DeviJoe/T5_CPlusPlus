//
// Created by lewak on 16.06.2020.
//

#ifndef TASK5_RECTANGULAR_H
#define TASK5_RECTANGULAR_H


#include "AbstractFigure.h"
#include "Distanceble.h"

class Rectangular : public AbstractFigure, Distanceble{

private:
    Point *a;
    Point *b;
    Point *c;
    Point *d;

public:

    Rectangular(Color *color, Point *a, Point *b, Point *c, Point *d);

    virtual ~Rectangular();

    double &perimeter() override;

    double &area() override;

    Point *getA() const;

    Point *getB() const;

    Point *getC() const;

    Point *getD() const;
};



#endif //TASK5_RECTANGULAR_H
