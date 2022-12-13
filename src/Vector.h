#ifndef VECTOR_VECTOR_H
#define VECTOR_VECTOR_H

#include <cmath>


// Здесь используем виртуальные методы для их будущего переопределения и написания реализации
class Vector {
public:
    virtual Vector *Add(Vector *vector) = 0; // Виртуальный метод суммы векторов, все ниже идёт по аналогии

    virtual Vector *Substract(Vector *vector) = 0;

    virtual float ScalarMultiply(Vector *vector) = 0;

    virtual Vector *Add(float number) = 0;

    virtual Vector *Substract(float number) = 0;

    virtual Vector *Multiply(float number) = 0;

    virtual float Length() = 0;
};


#endif //VECTOR_VECTOR_H
