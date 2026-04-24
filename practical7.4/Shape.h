#ifndef SHAPE_H
#define SHAPE_H

#include <iostream>
using namespace std;

// Base class
class Shape {
public:
    virtual float area() = 0; // pure virtual
};

// Rectangle
class Rectangle : public Shape {
private:
    float length, width;

public:
    Rectangle(float l = 0, float w = 0) {
        length = l;
        width = w;
    }

    float area() override {
        return length * width;
    }
};

// Circle
class Circle : public Shape {
private:
    float radius;

public:
    Circle(float r = 0) {
        radius = r;
    }

    float area() override {
        return 3.14f * radius * radius;
    }
};

#endif
