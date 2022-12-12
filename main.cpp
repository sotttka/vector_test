#include <iostream>
#include "src/Vector2.h"

void addVectorTest() {
    Vector2 vector(5, 5);
    vector.Add(new Vector2(1, 23));
    std::cout << "Результат сложения векторов: X: " << vector.getX() << " Y:" << vector.getY() << std::endl;
}

void lengthVectorTest() {
    Vector2 vector(5, 5);
    std::cout << "Длина вектора: " << vector.Length() << std::endl;
}

void substractVectorTest() {
    Vector2 vector(5, 5);
    vector.Substract(new Vector2(1, 12));
    std::cout << "Результат разности векторов: X: " << vector.getX() << " Y:" << vector.getY() << std::endl;
}

void multiplyOnNumberVectorTest() {
    Vector2 vector(5, 5);
    vector.Multiply(5);
    std::cout << "Результат умножения на число: X: " << vector.getX() << " Y:" << vector.getY() << std::endl;
}

void scalarMultiplyVectorTest() {
    Vector2 vector(5, 5);
    std::cout << "Результат скалярного умножения: " << vector.ScalarMultiply(new Vector2(1, 12)) << std::endl;
}

int main() {
    addVectorTest();
    lengthVectorTest();
    substractVectorTest();
    multiplyOnNumberVectorTest();
    scalarMultiplyVectorTest();

    return 0;
}
