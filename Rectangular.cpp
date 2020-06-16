//
// Created by lewak on 16.06.2020.
//

#include "Rectangular.h"



Rectangular::~Rectangular() {
    delete a, b, c, d;
}

Rectangular::Rectangular(AbstractFigure::Color *color, AbstractFigure::Point *a, AbstractFigure::Point *b,
                         AbstractFigure::Point *c, AbstractFigure::Point *d) : AbstractFigure(color), a(a), b(b), c(c),
                                                                               d(d) {
    this->a = a;
    this->b = b;
    this->c = c;
    this->d = d;
}

double &Rectangular::perimeter() {
    double ab = distance(a, b);
    double bc = distance(b, c);
    double res = 2 * (ab + bc);
    return res;
}

double &Rectangular::area() {
    double ab = distance(a, b);
    double bc = distance(b, c);
    double res = ab * bc;
    return res;
}

AbstractFigure::Point *Rectangular::getA() const {
    return a;
}

AbstractFigure::Point *Rectangular::getB() const {
    return b;
}

AbstractFigure::Point *Rectangular::getC() const {
    return c;
}

AbstractFigure::Point *Rectangular::getD() const {
    return d;
}
