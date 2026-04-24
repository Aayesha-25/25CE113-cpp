#ifndef SHAPE_H
#define SHAPE_H

#include <iostream>
using namespace std;

class Shape {
protected:
    float radius;

public:
    void setRadius(float r) {
        radius = r;
    }

    float getRadius() {
        return radius;
    }
};

class Circle : public Shape {
public:
    float area() {
        return 3.14f * radius * radius;
    }
};

#endif
