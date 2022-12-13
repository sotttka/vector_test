#include <iostream>
#include "src/Vector2.h" // Инклюдим нашу библиотеку

void addVectorTest(float x, float y) {
    Vector2 vector(x, y);
    vector.Add(new Vector2(1, 23));
    std::cout << "Результат сложения векторов: X: " << vector.getX() << " Y:" << vector.getY() << std::endl;
}

void lengthVectorTest(float x, float y) {
    Vector2 vector(x, y);
    std::cout << "Длина вектора: " << vector.Length() << std::endl; // Выводим длину вектора
}

void substractVectorTest(float x, float y) {
    Vector2 vector(x, y);
    vector.Substract(new Vector2(1, 12)); // Отнимаем от вектора другой вектор который передадим в аргумент метода
    std::cout << "Результат разности векторов: X: " << vector.getX() << " Y:" << vector.getY() << std::endl;
}

void multiplyOnNumberVectorTest(float x, float y) {
    Vector2 vector(x, y);
    vector.Multiply(5); // Вызываем метод умножния на число 
    std::cout << "Результат умножения на число: X: " << vector.getX() << " Y:" << vector.getY() << std::endl; // Вызываем геттеры (методы) и получаем с помощью данных методов значения x, y
}

void scalarMultiplyVectorTest(float x, float y) {
    Vector2 vector(x, y); // Создание объекта вектора типа данных Vector2
    std::cout << "Результат скалярного умножения: " << vector.ScalarMultiply(new Vector2(1, 12)) << std::endl; // Вызов метода скалярного умножения 
}

int main() {
    float x, y;
    std::cout << "Введите x: ";
    std::cin >> x;
    std::cout << "Введите y: ";
    std::cin >> y;

    addVectorTest(x, y);
    lengthVectorTest(x, y);
    substractVectorTest(x, y);
    multiplyOnNumberVectorTest(x, y);
    scalarMultiplyVectorTest(x, y);

    return 0;
}
