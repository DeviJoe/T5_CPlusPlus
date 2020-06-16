//
// Created by Devijoe on 16.06.2020.
//

#include "Triangle.h"
#include "cmath"

Triangle::Triangle(AbstractFigure::Color *color, AbstractFigure::Point *a, AbstractFigure::Point *b,
                   AbstractFigure::Point *c) : AbstractFigure(color), a(a), b(b), c(c) {
    this->a = a;
    this->b = b;
    this->c = c;
}

AbstractFigure::Point *Triangle::getA() const {
    return a;
}

AbstractFigure::Point *Triangle::getB() const {
    return b;
}

AbstractFigure::Point *Triangle::getC() const {
    return c;
}

double &Triangle::perimeter() {
    double ab = distance(a, b);
    double ac = distance(a, c);
    double bc = distance(b, c);
    double res = ab + ac + bc;
    return res;
}

double &Triangle::area() {
    double ab = distance(a, b);
    double ac = distance(a, c);
    double bc = distance(b, c);
    double p = perimeter() / 2;
    double res = sqrt(p * (p - ab) * (p - ac) * (p - bc));
    return res;
}


Triangle::~Triangle() {
    delete a, b, c;
}
