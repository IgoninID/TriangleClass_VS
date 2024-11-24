#include <iostream>
#include "Triangle.h"

using namespace std;

/// <summary>
/// вывод информации о треугольнике
/// </summary>
/// <param name="Trian - объект треугольник"></param>
void print_triangleC(Triangle& Trian)
{
    cout << Trian.TriangleC->to_string(); // вывод строки с информацией о треугольнике
}

/// <summary>
/// вывод информации о треугольнике
/// </summary>
/// <param name="Trian - объект треугольник"></param>
void print_triangleS(Triangle& Trian)
{
    cout << Trian.TriangleS->to_string(); // вывод строки с информацией о треугольнике
}

int main()
{
    test(); //вызов проверки
    Triangle FirstTri; // объявление объекта, вызов конструктора без параметров
    FirstTri.TriangleC = new Triangle_coord;
    print_triangleC(FirstTri); // вызов функции вывода информации о треугольнике
    cout << "\n"; // пустая строка

    FirstTri.TriangleC->set_x1_coord(56); // изменяем координату x первой вершины
    cout << FirstTri.TriangleC->get_x1_coord() << "\n"; // вызов метода вывода координаты x первой вершины
    print_triangleC(FirstTri); // вызов функции вывода информации о треугольнике
    cout << "\n"; // пустая строка
    delete FirstTri.TriangleC;

    Triangle Second[10]; // создаем статический массив из 10 объектов-треугольников, вызов конструктора без параметров
    Second[2].TriangleC = new Triangle_coord;
    Second[2].TriangleC->set_x3_coord(22); // у 3 треугольника изменяем координату x третьей вершины
    print_triangleC(Second[2]); // вызов функции вывода информации о треугольнике (выводим информацию о третьем треугольнике)
    cout << "\n"; // пустая строка
    delete Second[2].TriangleC;

    Triangle* Third = new Triangle[3]; // создаем динамический массив из 3 объектов-треугольников, вызов конструктора без параметров
    Third[1].TriangleS = new Triangle_sides;
    Third[1].TriangleS->set_sideA(25); // у 2 треугольника изменяем первую сторону треугольника
    print_triangleS(Third[1]); // вызов функции вывода информации о треугольнике(выводим информацию о втором треугольнике)
    delete Third[1].TriangleS;
    delete[] Third; // очищение памяти
    cout << "\n"; // пустая строка

    Triangle* Fourth[3]; // объявляем 3 указателя на объекты-треугольники, объекты не создаются ,нет вызова конструктора без параметров
    for (int i = 0; i < 3; i++)
    {
        Fourth[i] = new Triangle;
        Fourth[i]->TriangleS = new Triangle_sides(34, 56, 78);
        cout << Fourth[i]->TriangleS->to_string() << "\n"; // вызов вывода строки с информацией о треугольнике
    }
    for (int i = 0; i < 3; i++)
    {
        delete Fourth[i]->TriangleS;
        delete Fourth[i]; // очищение памяти
    }

    Triangle* Fifth = new Triangle;
    Fifth->TriangleS = new Triangle_sides;
    print_triangleS(*Fifth);
    delete Fifth->TriangleS;
    delete Fifth;

    Triangle Test4;
    Test4.TriangleC = new Triangle_coord;
    Test4.TriangleC->Load_file("file.txt");
    print_triangleC(Test4);

    return 0; // завершение работы программы
}