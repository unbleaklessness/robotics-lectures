#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <QSet>
#include <QPoint>

#include "drawable.h"

class Shape : public Drawable
{

private:
    Shape();
    ~Shape();

    QSet<QPoint*> *points;

    QSet<QPoint*> *centerVectors();

public:
    QColor color;

    static Shape *makeRectangle(int width, int height);
    static Shape *makeCircle(int radius);
    static Shape *minkowskiSum(Shape *shape, Shape *over);

    void draw(QWidget *widget);

    void rotate(double angle);
    void translate(int x, int y);

    QPoint *getCenter();
};

#endif // RECTANGLE_H
