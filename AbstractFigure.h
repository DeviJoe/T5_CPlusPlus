//
// Created by Devijoe on 16.06.2020.
//

#ifndef TASK5_ABSTRACTFIGURE_H
#define TASK5_ABSTRACTFIGURE_H


class AbstractFigure {

public:
    enum Color {
        RED,
        GREEN,
        BLACK,
        WHITE,
        GREY,
        BLUE,
        MAGENTA,
        YELLOW,
        PURPLE,
        ORANGE
    };

public:
    struct Point {
        double *x;
        double  *y;
    };

private:
    Color *color;

public:
    AbstractFigure(Color *color);

    virtual double &perimeter();

    virtual double &area();
    Color *getColor() const;

    virtual ~AbstractFigure();
};


#endif //TASK5_ABSTRACTFIGURE_H
