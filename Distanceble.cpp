//
// Created by lewak on 16.06.2020.
//

#include <cmath>
#include "Distanceble.h"

double Distanceble::distance(AbstractFigure::Point *a, AbstractFigure::Point *b) {
    double res = sqrt(pow(*a->x - *b->x, 2) + pow(*a->y - *b->y, 2));
    return res;
}
