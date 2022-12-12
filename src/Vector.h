#ifndef VECTOR_VECTOR_H
#define VECTOR_VECTOR_H

#include <cmath>

class Vector {
public:
    virtual Vector *Add(Vector *vector) = 0;

    virtual Vector *Substract(Vector *vector) = 0;

    virtual float ScalarMultiply(Vector *vector) = 0;

    virtual Vector *Add(float number) = 0;

    virtual Vector *Substract(float number) = 0;

    virtual Vector *Multiply(float number) = 0;

    virtual float Length() = 0;
};


#endif //VECTOR_VECTOR_H
