//
// Created by Devijoe on 16.06.2020.
//

#include <math.h>
#include "Round.h"

AbstractFigure::Point *Round::getCenter() const {
    return center;
}

int *Round::getRadius() const {
    return radius;
}

Round::Round(AbstractFigure::Color *color, AbstractFigure::Point *center, int *radius) : AbstractFigure(color), center(center),
                                                                       radius(radius) {
    this->center = center;
    this->radius = radius;
}

double &Round::perimeter() {
    double res = 2.0 * M_PI * static_cast<double>(*radius);
    return res;
}

double &Round::area() {
    double res = M_PI * static_cast<double>(*radius) * static_cast<double>(*radius);
    return res;
}

Round::~Round() {
    delete center;
    delete radius;
}
