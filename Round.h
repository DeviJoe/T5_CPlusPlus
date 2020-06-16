//
// Created by Devijoe on 16.06.2020.
//

#ifndef TASK5_ROUND_H
#define TASK5_ROUND_H


#include "AbstractFigure.h"

class Round : public AbstractFigure {

private:
    Point *center;
    int *radius;

public:
    Point *getCenter() const;

    int *getRadius() const;

    Round(Color *color, Point *center, int *radius);

    double & perimeter() override;

    double &area() override;

    virtual ~Round();
};


#endif //TASK5_ROUND_H
