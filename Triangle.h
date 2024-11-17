#pragma once
#include <string>

/// <summary>
/// Класс треугольник.
/// поля: координаты вершин, стороны треугольника.
/// методы: ввод и вывод координат, вычисление периметра и площади.
/// </summary>
class Triangle
{
private: // приватная область - доступ только внутри класса
    double x1_coord; // координата x первой вершины
    double x2_coord; // координата x второй вершины
    double x3_coord; // координата x третьей вершины
    double y1_coord; // координата y первой вершины
    double y2_coord; // координата y второй вершины
    double y3_coord; // координата y третьей вершины
  
    //
    double side_A; // первая сторона треугольника
    double side_B; // вторая сторона треугольника
    double side_C; // третья сторона треугольника

public: // общедоступная область - доступ вне класса

    /// <summary>
    /// конструктор без параметров
    /// </summary>
    Triangle();

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
    Triangle(double x1_coord, double y1_coord, double x2_coord, double y2_coord, double x3_coord, double y3_coord);

    /// <summary>
    /// конструктор с параметрами для сторон треугольника
    /// </summary>
    /// <param name="side_A - первая сторона треугольника"></param>
    /// <param name="side_B - вторая сторона треугольника"></param>
    /// <param name="side_C - третья сторона треугольника"></param>
    Triangle(double side_A, double side_B, double side_C);

    /// <summary>
    /// ввод координаты x первой вершины
    /// </summary>
    /// <param name="x - координата x"></param>
    void set_x1_coord(double x);

    /// <summary>
    /// ввод координаты x второй вершины
    /// </summary>
    /// <param name="x - координата x"></param>
    void set_x2_coord(double x);

    /// <summary>
    /// ввод координаты x третьей вершины
    /// </summary>
    /// <param name="x - координата x"></param>
    void set_x3_coord(double x);

    /// <summary>
    /// ввод координаты y первой вершины
    /// </summary>
    /// <param name="y - координата y"></param>
    void set_y1_coord(double y);

    /// <summary>
    /// ввод координаты y второй вершины
    /// </summary>
    /// <param name="y - координата y"></param>
    void set_y2_coord(double y);

    /// <summary>
    /// ввод координаты x третьей вершины
    /// </summary>
    /// <param name="y - координата y"></param>
    void set_y3_coord(double y);

    /// <summary>
    /// ввод первой вершины
    /// </summary>
    /// <param name="x - координата x"></param>
    /// <param name="y - координата y"></param>
    void set_first_vert(double x, double y);

    /// <summary>
    /// ввод второй вершины
    /// </summary>
    /// <param name="x - координата x"></param>
    /// <param name="y - координата y"></param>
    void set_second_vert(double x, double y);

    /// <summary>
    /// ввод третьей вершины
    /// </summary>
    /// <param name="x - координата x"></param>
    /// <param name="y - координата y"></param>
    void set_third_vert(double x, double y);

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
    void set_all_vert(double x1, double y1, double x2, double y2, double x3, double y3);

    /// <summary>
    /// ввод первой стороны треугольника.
    /// правило: неотрицательное число
    /// </summary>
    /// <param name="side"></param>
    void set_sideA(double side);

    /// <summary>
    /// ввод второй стороны треугольника.
    /// правило: неотрицательное число
    /// </summary>
    /// <param name="side"></param>
    void set_sideB(double side);

    /// <summary>
    /// ввод третьей стороны треугольника.
    /// правило: неотрицательное число
    /// </summary>
    /// <param name="side"></param>
    void set_sideC(double side);

    /// <summary>
    /// ввод сторон треугольника.
    /// правило: сумма двух сторон треугольника должна быть больше третьей стороны
    /// </summary>
    /// <param name="fside - первая сторона треугольника"></param>
    /// <param name="sside - вторая сторона треугольника"></param>
    /// <param name="tside - третья сторона треугольника"></param>
    void set_sides(double fside, double sside, double tside);

    /// <summary>
    /// вывод координаты x первой вершины
    /// </summary>
    /// <returns>
    /// координата x первой вершины
    /// </returns>
    double get_x1_coord() const;

    /// <summary>
    /// вывод координаты x второй вершины 
    /// </summary>
    /// <returns>
    ///  координата x второй вершины
    /// </returns>
    double get_x2_coord() const;

    /// <summary>
    /// вывод координаты x третьей вершины 
    /// </summary>
    /// <returns>
    ///  координата x третьей вершины
    /// </returns>
    double get_x3_coord() const;

    /// <summary>
    /// вывод координаты y первой вершины 
    /// </summary>
    /// <returns>
    /// координата y первой вершины
    /// </returns>
    double get_y1_coord() const;

    /// <summary>
    /// вывод координаты y второй вершины 
    /// </summary>
    /// <returns>
    /// координата y второй вершины
    /// </returns>
    double get_y2_coord() const;

    /// <summary>
    /// вывод координаты y третьей вершины
    /// </summary>
    /// <returns>
    /// координата y третьей вершины
    /// </returns>
    double get_y3_coord() const;

    /// <summary>
    /// вывод первой стороны треугольника
    /// </summary>
    /// <returns>
    /// длина первой стороны треугольника
    /// </returns>
    double get_sideA() const;

    /// <summary>
    /// вывод второй стороны треугольнка
    /// </summary>
    /// <returns>
    /// длина второй стороны треугольника
    /// </returns>
    double get_sideB() const;

    /// <summary>
    /// вывод третьей стороны треугольнка
    /// </summary>
    /// <returns>
    /// длина третьей стороны треугольника
    /// </returns>
    double get_sideC() const;

    /// <summary>
    /// вывод информации о треугольнике
    /// </summary>
    /// <returns>
    /// строка с информацией о треугольнике: координаты вершин, длина сторон, периметр и площадь
    /// </returns>
    std::string to_string();

    /// <summary>
    /// вычисление периметра.
    /// правило: сумма двух сторон треугольника должна быть больше третьей стороны 
    /// </summary>
    /// <returns>
    /// периметр треугольника
    /// </returns>
    double calc_perim();

    /// <summary>
    /// вычисление площади.
    /// правило: сумма двух сторон треугольника должна быть больше третьей стороны
    /// </summary>
    /// <returns>
    /// площадь треугольника
    /// </returns>
    double calc_area();

};

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
double calc_side(double first_x, double first_y, double second_x, double second_y);

/// <summary>
/// проверка работы методов и функций
/// </summary>
void test();