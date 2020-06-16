//
// Created by lewak on 16.06.2020.
//

#include "AbstractFigure.h"

AbstractFigure::Color *AbstractFigure::getColor() const {
    return color;
}

AbstractFigure::AbstractFigure(AbstractFigure::Color *color) : color(color) {
    this->color = color;
}

AbstractFigure::~AbstractFigure() {
    delete color;
}
