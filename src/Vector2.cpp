#include "Vector2.h"

Vector2::Vector2(float x, float y) {
    this->x = x;
    this->y = y;
}

Vector *Vector2::Add(float number) {
    y += number;
    x += number;
    return this;
}

Vector *Vector2::Add(Vector *vector) {
    Vector2 *vec = (Vector2*)vector;
    this->y += vec->y;
    this->x += vec->x;
    return this;
}

Vector *Vector2::Substract(Vector *vector) {
    Vector2 *vec = (Vector2*)vector;
    this->x -= vec->x;
    this->y -= vec->y;
    return this;
}

Vector *Vector2::Substract(float number) {
    this->x -= number;
    this->y -= number;
    return this;
}

Vector *Vector2::Multiply(float number) {
    this->y *= number;
    this->x *= number;
    return this;
}

float Vector2::ScalarMultiply(Vector *vector) {
    Vector2 *vec = (Vector2*)vector;
    return y * vec->y + x * vec->x;
}

float Vector2::Length() {
    return (float)sqrt(pow(x, 2) + pow(y, 2));
}

float Vector2::getX() const {
    return x;
}

void Vector2::setX(float x) {
    Vector2::x = x;
}

float Vector2::getY() const {
    return y;
}

void Vector2::setY(float y) {
    Vector2::y = y;
}
