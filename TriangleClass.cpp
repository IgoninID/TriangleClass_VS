﻿#include <iostream>
#include "Triangle.h"

using namespace std;

/// <summary>
/// вывод информации о треугольнике
/// </summary>
/// <param name="Trian - объект треугольник"></param>
void print_triangle(Triangle& Trian)
{
    cout << Trian.to_string(); // вывод строки с информацией о треугольнике
}

int main()
{
    test();
    Triangle FirstTri; // объявление объекта, вызов конструктора без параметров
    print_triangle(FirstTri); // вызов функции вывода информации о треугольнике
    cout << "\n"; // пустая строка

    FirstTri.set_x1_coord(56); // изменяем координату x первой вершины
    cout << FirstTri.get_x1_coord() << "\n"; // вызов метода вывода координаты x первой вершины
    print_triangle(FirstTri); // вызов функции вывода информации о треугольнике
    cout << "\n"; // пустая строка

    Triangle Second[10]; // создаем статический массив из 10 объектов-треугольников, вызов конструктора без параметров
    Second[2].set_x3_coord(22); // у 3 треугольника изменяем координату x третьей вершины
    print_triangle(Second[2]); // вызов функции вывода информации о треугольнике (выводим информацию о третьем треугольнике)
    cout << "\n"; // пустая строка

    Triangle* Third = new Triangle[3]; // создаем динамический массив из 3 объектов-треугольников, вызов конструктора без параметров
    Third[1].set_sideA(25); // у 2 треугольника изменяем первую сторону треугольника
    print_triangle(Third[1]); // вызов функции вывода информации о треугольнике(выводим информацию о втором треугольнике)
    delete[] Third; // очищение памяти
    cout << "\n"; // пустая строка

    Triangle* Fourth[3]; // объявляем 3 указателя на объекты-треугольники, объекты не создаются ,нет вызова конструктора без параметров
    for (int i = 0; i < 3; i++)
    {
        Fourth[i] = new Triangle(34, 56, 78); // выделяем память под объект-треугольник, вывозов конструктора с параметрами для сторон треугольника
        cout << Fourth[i]->to_string() << "\n"; // вызов вывода строки с информацией о треугольнике
    }
    for (int i = 0; i < 3; i++)
        delete Fourth[i]; // очищение памяти

    Triangle* Fifth = new Triangle(22, 22, 22); //динамическое создание 1 объекта
    print_triangle(*Fifth);
    delete Fifth;

    Triangle Test(11, 11, 11);
    print_triangle(Test);

    return 0; // завершение работы программы
}