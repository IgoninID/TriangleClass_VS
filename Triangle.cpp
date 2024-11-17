#include <cmath>
#include <string>
#include <cassert>
#include "Triangle.h"

/// <summary>
/// конструктор без параметров
/// </summary>
Triangle::Triangle()
{
    x1_coord = 0;
    x2_coord = 0;
    x3_coord = 0;
    y1_coord = 0;
    y2_coord = 0;
    y3_coord = 0;
    side_A = 0;
    side_B = 0;
    side_C = 0;
}

/// <summary>
/// конструктор с параметрами для координат вершин треугольника
/// правило: две вершины не должны быть с одинаковыми коодинатами
/// </summary>
/// <param name="x1_coord - координата x первой вершины"></param>
/// <param name="x2_coord - координата x второй вершины"></param>
/// <param name="x3_coord - координата x третьей вершины"></param>
/// <param name="y1_coord - координата y первой вершины"></param>
/// <param name="y2_coord - координата y второй вершины"></param>
/// <param name="y3_coord - координата y третьей вершины"></param>
Triangle::Triangle(double x1_coord, double y1_coord, double x2_coord, double y2_coord, double x3_coord, double y3_coord)
{
    set_all_vert(x1_coord, y1_coord, x2_coord, y2_coord, x3_coord, y3_coord);
    side_A = 0;
    side_B = 0;
    side_C = 0;
}

/// <summary>
/// конструктор с параметрами для сторон треугольника
/// правило: сумма двух сторон треугольника должна быть больше третьей стороны
/// </summary>
/// <param name="side_A - первая сторона треугольника"></param>
/// <param name="side_B - вторая сторона треугольника"></param>
/// <param name="side_C - третья сторона треугольника"></param>
Triangle::Triangle(double side_A, double side_B, double side_C)
{
    x1_coord = 0;
    x2_coord = 0;
    x3_coord = 0;
    y1_coord = 0;
    y2_coord = 0;
    y3_coord = 0;
    set_sides(side_A, side_B, side_C);
}

/// <summary>
/// ввод координаты x первой вершины
/// </summary>
/// <param name="x - координата x"></param>
void Triangle::set_x1_coord(double x)
{
    x1_coord = x;
}

/// <summary>
/// ввод координаты x второй вершины
/// </summary>
/// <param name="x - координата x"></param>
void Triangle::set_x2_coord(double x)
{
    x2_coord = x;
}

/// <summary>
/// ввод координаты x третьей вершины
/// </summary>
/// <param name="x - координата x"></param>
void Triangle::set_x3_coord(double x)
{
    x3_coord = x;
}

/// <summary>
/// ввод координаты y первой вершины
/// </summary>
/// <param name="y - координата y"></param>
void Triangle::set_y1_coord(double y)
{
    y1_coord = y;
}

/// <summary>
/// ввод координаты y второй вершины
/// </summary>
/// <param name="y - координата y"></param>
void Triangle::set_y2_coord(double y)
{
    y2_coord = y;
}

/// <summary>
/// ввод координаты x третьей вершины
/// </summary>
/// <param name="y - координата y"></param>
void Triangle::set_y3_coord(double y)
{
    y3_coord = y;
}

/// <summary>
/// ввод первой вершины
/// </summary>
/// <param name="x - координата x"></param>
/// <param name="y - координата y"></param>
void Triangle::set_first_vert(double x, double y)
{
    set_x1_coord(x);
    set_y1_coord(y);
}

/// <summary>
/// ввод второй вершины
/// </summary>
/// <param name="x - координата x"></param>
/// <param name="y - координата y"></param>
void Triangle::set_second_vert(double x, double y)
{
    set_x2_coord(x);
    set_y2_coord(y);
}

/// <summary>
/// ввод третьей вершины
/// </summary>
/// <param name="x - координата x"></param>
/// <param name="y - координата y"></param>
void Triangle::set_third_vert(double x, double y)
{
    set_x3_coord(x);
    set_y3_coord(y);
}

/// <summary>
/// ввод вершин треугольника.
/// правило: две вершины не должны быть с одинаковыми коодинатами
/// </summary>
/// <param name="x1 - координата x первой вершины"></param>
/// <param name="y1 - координата y первой вершины"></param>
/// <param name="x2 - координата x второй вершины"></param>
/// <param name="y2 - координата y второй вершины"></param>
/// <param name="x3 - координата x третьей вершины"></param>
/// <param name="y3 - координата y третьей вершины"></param>
void Triangle::set_all_vert(double x1, double y1, double x2, double y2, double x3, double y3)
{
    if (((x1 == y1) && (x1 == x2) && (x2 == y2)) || ((x1 == y1) && (x1 == x3) && (x3 == y3)) || ((x2 == y2) && (x2 == x3) && (x3 == y3)))
    {
        set_first_vert(0, 0);
        set_second_vert(0, 0);
        set_third_vert(0, 0);
    }
    else
    {
        set_first_vert(x1, y1);
        set_second_vert(x2, y2);
        set_third_vert(x3, y3);
    }
}

/// <summary>
/// ввод первой стороны треугольника.
/// правило: неотрицательное число
/// </summary>
/// <param name="side"></param>
void Triangle::set_sideA(double side)
{
    if (side >= 0)
        side_A = side;
    else
        side_A = 0;
}

/// <summary>
/// ввод второй стороны треугольника.
/// правило: неотрицательное число
/// </summary>
/// <param name="side"></param>
void Triangle::set_sideB(double side)
{
    if (side >= 0)
        side_B = side;
    else
        side_B = 0;
}

/// <summary>
/// ввод третьей стороны треугольника.
/// правило: неотрицательное число
/// </summary>
/// <param name="side"></param>
void Triangle::set_sideC(double side)
{
    if (side >= 0)
        side_C = side;
    else
        side_C = 0;
}

/// <summary>
/// ввод сторон треугольника.
/// правило: сумма двух сторон треугольника должна быть больше третьей стороны
/// </summary>
/// <param name="fside - первая сторона треугольника"></param>
/// <param name="sside - вторая сторона треугольника"></param>
/// <param name="tside - третья сторона треугольника"></param>
void Triangle::set_sides(double fside, double sside, double tside)
{
    if ((fside + sside <= tside) || (sside + tside <= fside) || (fside + tside <= sside))
    {
        set_sideA(0);
        set_sideB(0);
        set_sideC(0);
    }
    else
    {
        set_sideA(fside);
        set_sideB(sside);
        set_sideC(tside);
    }
}

/// <summary>
/// вывод координаты x первой вершины
/// </summary>
/// <returns>
/// координата x первой вершины
/// </returns>
double Triangle::get_x1_coord() const
{
    return x1_coord;
}

/// <summary>
/// вывод координаты x второй вершины 
/// </summary>
/// <returns>
///  координата x второй вершины
/// </returns>
double Triangle::get_x2_coord() const
{
    return x2_coord;
}

/// <summary>
/// вывод координаты x третьей вершины 
/// </summary>
/// <returns>
///  координата x третьей вершины
/// </returns>
double Triangle::get_x3_coord() const
{
    return x3_coord;
}

/// <summary>
/// вывод координаты y первой вершины 
/// </summary>
/// <returns>
/// координата y первой вершины
/// </returns>
double Triangle::get_y1_coord() const
{
    return y1_coord;
}

/// <summary>
/// вывод координаты y второй вершины 
/// </summary>
/// <returns>
/// координата y второй вершины
/// </returns>
double Triangle::get_y2_coord() const
{
    return y2_coord;
}

/// <summary>
/// вывод координаты y третьей вершины
/// </summary>
/// <returns>
/// координата y третьей вершины
/// </returns>
double Triangle::get_y3_coord() const
{
    return y3_coord;
}

/// <summary>
/// вывод первой стороны треугольника
/// </summary>
/// <returns>
/// длина первой стороны треугольника
/// </returns>
double Triangle::get_sideA() const
{
    return side_A;
}

/// <summary>
/// вывод второй стороны треугольнка
/// </summary>
/// <returns>
/// длина второй стороны треугольника
/// </returns>
double Triangle::get_sideB() const
{
    return side_B;
}

/// <summary>
/// вывод третьей стороны треугольнка
/// </summary>
/// <returns>
/// длина третьей стороны треугольника
/// </returns>
double Triangle::get_sideC() const
{
    return side_C;
}

/// <summary>
/// вычисление стороны треугольника.
/// </summary>
/// <param name="first_x - координата x одной вершины"></param>
/// <param name="first_y - координата y одной вершины"></param>
/// <param name="second_x - координата x другой вершины"></param>
/// <param name="second_y - координата y другой вершины"></param>
/// <returns>
/// длина стороны треугольника
/// </returns>
double calc_side(double first_x, double first_y, double second_x, double second_y)
{
    return sqrt(((first_x - second_x) * (first_x - second_x)) + ((first_y - second_y) * (first_y - second_y))); // Возвращает длину стороны треугольника по формуле
}

/// <summary>
/// вычисление периметра.
/// правило: сумма двух сторон треугольника должна быть больше третьей стороны 
/// </summary>
double Triangle::calc_perim()
{
    double P;
    if ((get_sideA() == 0) || (get_sideB() == 0) || (get_sideC() == 0))
    {
        double side1 = calc_side(get_x1_coord(), get_y1_coord(), get_x2_coord(), get_y2_coord());
        double side2 = calc_side(get_x1_coord(), get_y1_coord(), get_x3_coord(), get_y3_coord());
        double side3 = calc_side(get_x2_coord(), get_y2_coord(), get_x3_coord(), get_y3_coord());
        set_sides(side1, side2, side3);
    }
    if (((get_sideA() + get_sideB()) > get_sideC()) || ((get_sideB() + get_sideC()) > get_sideA()) || ((get_sideA() + get_sideC()) > get_sideB())) // если сумма двух сторон треугольника меньше или равна третьей стороне
        P = get_sideA() + get_sideB() + get_sideA(); // Возвращает сумму трех сторон треугольника(периметр)
    else
        P = 0;
    return P;
}

/// <summary>
/// вычисление площади.
/// правило: сумма двух сторон треугольника должна быть больше третьей стороны
/// </summary>
double Triangle::calc_area()
{
    double S;
    if ((get_sideA() == 0) || (get_sideB() == 0) || (get_sideC() == 0))
    {
        double side1 = calc_side(get_x1_coord(), get_y1_coord(), get_x2_coord(), get_y2_coord());
        double side2 = calc_side(get_x1_coord(), get_y1_coord(), get_x3_coord(), get_y3_coord());
        double side3 = calc_side(get_x2_coord(), get_x2_coord(), get_x3_coord(), get_y3_coord());
        set_sides(side1, side2, side3);
    }
    if (((get_sideA() + get_sideB()) > get_sideC()) || ((get_sideB() + get_sideC()) > get_sideA()) || ((get_sideA() + get_sideC()) > get_sideB())) // если сумма двух сторон треугольника меньше или равна третьей стороне
        S = sqrt(((get_sideA() + get_sideB() + get_sideC()) / 2) * (((get_sideA() + get_sideB() + get_sideC()) / 2) - get_sideA()) * (((get_sideA() + get_sideB() + get_sideC()) / 2) - get_sideB()) * (((get_sideA() + get_sideB() + get_sideC()) / 2) - get_sideC())); // Возвращает периметр треугольника по формуле Герона
    else
        S = 0;
    return S;
}

/// <summary>
/// вывод информации о треугольнике
/// </summary>
/// <returns>
/// строка с информацией о треугольнике: координаты вершин, длина сторон, периметр и площадь
/// </returns>
std::string Triangle::to_string()
{
    std::string s =
        "Vertexs: (" + std::to_string(get_x1_coord()) + " ; " + std::to_string(get_y1_coord()) + "), (" +
                       std::to_string(get_x2_coord()) + " ; " + std::to_string(get_y2_coord()) + "), (" +
                       std::to_string(get_x3_coord()) + " ; " + std::to_string(get_y3_coord()) + ")\n" +
        "Sides: " + std::to_string(get_sideA()) + " ; " +
                    std::to_string(get_sideB()) + " ; " +
                    std::to_string(get_sideC()) + "\n" +
        "Perimeter: " + std::to_string(calc_perim()) + "\n" +
        "Area: " + std::to_string(calc_area()) + "\n";
    return s;
}

void test()
{
    Triangle Test1(11, 11, 11);
    Triangle Test2(-1, 2, 4, -5, 9, 10);
    Triangle Test3;
    Test3.set_sides(12, 13, 14);
    assert((Test3.get_sideA() - 12) < 0.00001);
    assert((Test3.get_sideB() - 13) < 0.00001);
    assert((Test3.get_sideC() - 14) < 0.00001);
    assert((Test1.calc_perim() - 33) < 0.00001);
    assert((Test2.calc_area() - 55) < 0.00001);
    assert((Test2.get_x1_coord() - (-1)) < 0.00001);
    assert((Test2.get_y1_coord() - (2)) < 0.00001);
    assert((Test2.get_x2_coord() - (4)) < 0.00001);
    assert((Test2.get_y2_coord() - (-5)) < 0.00001);
    assert((Test2.get_x3_coord() - (9)) < 0.00001);
    assert((Test2.get_y3_coord() - (10)) < 0.00001);
    assert(Test1.to_string() == ("Vertexs: (0.000000 ; 0.000000), (0.000000 ; 0.000000), (0.000000 ; 0.000000)\nSides: 11.000000 ; 11.000000 ; 11.000000\nPerimeter: 33.000000\nArea: 52.394537\n"));
    Triangle Test4;
    Test4.set_all_vert(-1, 5, 5, 5, -7, -6);
    assert((Test4.get_x1_coord() - (-1)) < 0.00001);
    assert((Test4.get_y1_coord() - (5)) < 0.00001);
    assert((Test4.get_x2_coord() - (5)) < 0.00001);
    assert((Test4.get_y2_coord() - (5)) < 0.00001);
    assert((Test4.get_x3_coord() - (-7)) < 0.00001);
    assert((Test4.get_y3_coord() - (-6)) < 0.00001);

    // todo: to_string
    // todo: another methods
}