#ifndef GRADINGSYSTEM_H
#define GRADINGSYSTEM_H

#include <iostream>
using namespace std;

class Grading {
protected:
    float marks;

public:
    Grading(float m = 0) {
        marks = m;
    }

    virtual char computeGrade() = 0;

    virtual void display() {
        cout << "Marks: " << marks << endl;
    }

    virtual ~Grading() {}
};

class Undergraduate : public Grading {
public:
    Undergraduate(float m = 0) : Grading(m) {}

    char computeGrade() {
        if (marks >= 75) return 'A';
        else if (marks >= 60) return 'B';
        else if (marks >= 50) return 'C';
        else return 'F';
    }

    void display() {
        cout << "[Undergraduate]\n";
        Grading::display();
        cout << "Grade: " << computeGrade() << endl;
        cout << "-------------------\n";
    }
};

class Postgraduate : public Grading {
public:
    Postgraduate(float m = 0) : Grading(m) {}

    char computeGrade() {
        if (marks >= 80) return 'A';
        else if (marks >= 65) return 'B';
        else if (marks >= 55) return 'C';
        else return 'F';
    }

    void display() {
        cout << "[Postgraduate]\n";
        Grading::display();
        cout << "Grade: " << computeGrade() << endl;
        cout << "-------------------\n";
    }
};

#endif
