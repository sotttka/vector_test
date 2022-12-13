#ifndef VECTOR_VECTOR2_H
#define VECTOR_VECTOR2_H

#include "Vector.h"

// Наследуем родительский класс Vector и переопределяем все его виртуальные методы
class Vector2 : public Vector {
public:
    Vector2(float x, float y);

    Vector *Add(float number) override; // Переопределенный метод суммы векторов, всё ниже по аналогии

    Vector *Add(Vector *vector) override;

    Vector *Substract(Vector *vector) override;

    Vector *Substract(float number) override;

    Vector *Multiply(float number) override;

    float Length() override;

    float ScalarMultiply(Vector *vector) override;

    float getX() const;

    void setX(float x);

    float getY() const;

    void setY(float y);

// Точки вектора (доступны только в дочернем классе)
protected:
    float x; 

    float y;
};


#endif //VECTOR_VECTOR2_H
