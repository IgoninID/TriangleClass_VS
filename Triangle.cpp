#include <cmath>
#include <string>
#include <fstream>
#include <cassert>
#include "Triangle.h"

    /// <summary>
    /// ����������� ��� ����������
    /// </summary>
    Triangle_coord::Triangle_coord()
    {
        x1_coord = 0;
        x2_coord = 0;
        x3_coord = 0;
        y1_coord = 0;
        y2_coord = 0;
        y3_coord = 0;
    }

/// <summary>
/// ����������� ��� ����������
/// </summary>
Triangle_sides::Triangle_sides()
{
    side_A = 0;
    side_B = 0;
    side_C = 0;
}

/// <summary>
/// ����������� � ����������� ��� ��������� ������ ������������
/// �������: ��� ������� �� ������ ���� � ����������� �����������
/// </summary>
/// <param name="x1_coord - ���������� x ������ �������"></param>
/// <param name="x2_coord - ���������� x ������ �������"></param>
/// <param name="x3_coord - ���������� x ������� �������"></param>
/// <param name="y1_coord - ���������� y ������ �������"></param>
/// <param name="y2_coord - ���������� y ������ �������"></param>
/// <param name="y3_coord - ���������� y ������� �������"></param>
Triangle_coord::Triangle_coord(double x1_coord, double y1_coord, double x2_coord, double y2_coord, double x3_coord, double y3_coord)
{
    set_all_vert(x1_coord, y1_coord, x2_coord, y2_coord, x3_coord, y3_coord);
}

/// <summary>
/// ����������� � ����������� ��� ������ ������������
/// �������: ����� ���� ������ ������������ ������ ���� ������ ������� �������
/// </summary>
/// <param name="side_A - ������ ������� ������������"></param>
/// <param name="side_B - ������ ������� ������������"></param>
/// <param name="side_C - ������ ������� ������������"></param>
Triangle_sides::Triangle_sides(double side_A, double side_B, double side_C)
{
    set_sides(side_A, side_B, side_C);
}

/// <summary>
/// ���� ���������� x ������ �������
/// </summary>
/// <param name="x - ���������� x"></param>
void Triangle_coord::set_x1_coord(double x)
{
    x1_coord = x;
}

/// <summary>
/// ���� ���������� x ������ �������
/// </summary>
/// <param name="x - ���������� x"></param>
void Triangle_coord::set_x2_coord(double x)
{
    x2_coord = x;
}

/// <summary>
/// ���� ���������� x ������� �������
/// </summary>
/// <param name="x - ���������� x"></param>
void Triangle_coord::set_x3_coord(double x)
{
    x3_coord = x;
}

/// <summary>
/// ���� ���������� y ������ �������
/// </summary>
/// <param name="y - ���������� y"></param>
void Triangle_coord::set_y1_coord(double y)
{
    y1_coord = y;
}

/// <summary>
/// ���� ���������� y ������ �������
/// </summary>
/// <param name="y - ���������� y"></param>
void Triangle_coord::set_y2_coord(double y)
{
    y2_coord = y;
}

/// <summary>
/// ���� ���������� x ������� �������
/// </summary>
/// <param name="y - ���������� y"></param>
void Triangle_coord::set_y3_coord(double y)
{
    y3_coord = y;
}

/// <summary>
/// ���� ������ �������
/// </summary>
/// <param name="x - ���������� x"></param>
/// <param name="y - ���������� y"></param>
void Triangle_coord::set_first_vert(double x, double y)
{
    set_x1_coord(x);
    set_y1_coord(y);
}

/// <summary>
/// ���� ������ �������
/// </summary>
/// <param name="x - ���������� x"></param>
/// <param name="y - ���������� y"></param>
void Triangle_coord::set_second_vert(double x, double y)
{
    set_x2_coord(x);
    set_y2_coord(y);
}

/// <summary>
/// ���� ������� �������
/// </summary>
/// <param name="x - ���������� x"></param>
/// <param name="y - ���������� y"></param>
void Triangle_coord::set_third_vert(double x, double y)
{
    set_x3_coord(x);
    set_y3_coord(y);
}

/// <summary>
/// ���� ������ ������������.
/// �������: ��� ������� �� ������ ���� � ����������� �����������
/// </summary>
/// <param name="x1 - ���������� x ������ �������"></param>
/// <param name="y1 - ���������� y ������ �������"></param>
/// <param name="x2 - ���������� x ������ �������"></param>
/// <param name="y2 - ���������� y ������ �������"></param>
/// <param name="x3 - ���������� x ������� �������"></param>
/// <param name="y3 - ���������� y ������� �������"></param>
void Triangle_coord::set_all_vert(double x1, double y1, double x2, double y2, double x3, double y3)
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
/// ���� ������ ������� ������������.
/// �������: ��������������� �����
/// </summary>
/// <param name="side"></param>
void Triangle_sides::set_sideA(double side)
{
    if (side >= 0)
        side_A = side;
    else
        side_A = 0;
}

/// <summary>
/// ���� ������ ������� ������������.
/// �������: ��������������� �����
/// </summary>
/// <param name="side"></param>
void Triangle_sides::set_sideB(double side)
{
    if (side >= 0)
        side_B = side;
    else
        side_B = 0;
}

/// <summary>
/// ���� ������� ������� ������������.
/// �������: ��������������� �����
/// </summary>
/// <param name="side"></param>
void Triangle_sides::set_sideC(double side)
{
    if (side >= 0)
        side_C = side;
    else
        side_C = 0;
}

/// <summary>
/// ���� ������ ������������.
/// �������: ����� ���� ������ ������������ ������ ���� ������ ������� �������
/// </summary>
/// <param name="fside - ������ ������� ������������"></param>
/// <param name="sside - ������ ������� ������������"></param>
/// <param name="tside - ������ ������� ������������"></param>
void Triangle_sides::set_sides(double fside, double sside, double tside)
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
/// ����� ���������� x ������ �������
/// </summary>
/// <returns>
/// ���������� x ������ �������
/// </returns>
double Triangle_coord::get_x1_coord() const
{
    return x1_coord;
}

/// <summary>
/// ����� ���������� x ������ ������� 
/// </summary>
/// <returns>
///  ���������� x ������ �������
/// </returns>
double Triangle_coord::get_x2_coord() const
{
    return x2_coord;
}

/// <summary>
/// ����� ���������� x ������� ������� 
/// </summary>
/// <returns>
///  ���������� x ������� �������
/// </returns>
double Triangle_coord::get_x3_coord() const
{
    return x3_coord;
}

/// <summary>
/// ����� ���������� y ������ ������� 
/// </summary>
/// <returns>
/// ���������� y ������ �������
/// </returns>
double Triangle_coord::get_y1_coord() const
{
    return y1_coord;
}

/// <summary>
/// ����� ���������� y ������ ������� 
/// </summary>
/// <returns>
/// ���������� y ������ �������
/// </returns>
double Triangle_coord::get_y2_coord() const
{
    return y2_coord;
}

/// <summary>
/// ����� ���������� y ������� �������
/// </summary>
/// <returns>
/// ���������� y ������� �������
/// </returns>
double Triangle_coord::get_y3_coord() const
{
    return y3_coord;
}

/// <summary>
/// ����� ������ ������� ������������
/// </summary>
/// <returns>
/// ����� ������ ������� ������������
/// </returns>
double Triangle_sides::get_sideA() const
{
    return side_A;
}

/// <summary>
/// ����� ������ ������� �����������
/// </summary>
/// <returns>
/// ����� ������ ������� ������������
/// </returns>
double Triangle_sides::get_sideB() const
{
    return side_B;
}

/// <summary>
/// ����� ������� ������� �����������
/// </summary>
/// <returns>
/// ����� ������� ������� ������������
/// </returns>
double Triangle_sides::get_sideC() const
{
    return side_C;
}

/// <summary>
/// ���������� ������� ������������.
/// </summary>
/// <param name="first_x - ���������� x ����� �������"></param>
/// <param name="first_y - ���������� y ����� �������"></param>
/// <param name="second_x - ���������� x ������ �������"></param>
/// <param name="second_y - ���������� y ������ �������"></param>
/// <returns>
/// ����� ������� ������������
/// </returns>
double calc_side(double first_x, double first_y, double second_x, double second_y)
{
    return sqrt(((first_x - second_x) * (first_x - second_x)) + ((first_y - second_y) * (first_y - second_y))); // ���������� ����� ������� ������������ �� �������
}

/// <summary>
/// ���������� ���������.
/// �������: ����� ���� ������ ������������ ������ ���� ������ ������� ������� 
/// </summary>
/// <returns>
/// �������� ������������
/// </returns>
double Triangle_coord::calc_perim() const
{
    double P;
        double side1 = calc_side(get_x1_coord(), get_y1_coord(), get_x2_coord(), get_y2_coord());
        double side2 = calc_side(get_x1_coord(), get_y1_coord(), get_x3_coord(), get_y3_coord());
        double side3 = calc_side(get_x2_coord(), get_y2_coord(), get_x3_coord(), get_y3_coord());
    if ((((side1 + side2) > side3) && ((side2 + side3) > side1) && ((side1 + side3) > side2)) && ((side1 > 0.0) && (side2 > 0.0) && (side3 > 0.0))) // ���� ����� ���� ������ ������������ ������ ��� ����� ������� �������
        P = side1 + side2 + side3; // ���������� ����� ���� ������ ������������(��������)
    else
        P = 0;
    return P;
}

/// <summary>
/// ���������� ���������.
/// �������: ����� ���� ������ ������������ ������ ���� ������ ������� ������� 
/// </summary>
/// <returns>
/// �������� ������������
/// </returns>
double Triangle_sides::calc_perim() const
{
    double P;
    if (((get_sideA() + get_sideB()) > get_sideC()) && ((get_sideB() + get_sideC()) > get_sideA()) && ((get_sideA() + get_sideC()) > get_sideB()) && (get_sideA() > 0) && (get_sideB() > 0) && (get_sideC() > 0)) // ���� ����� ���� ������ ������������ ������ ��� ����� ������� �������
        P = get_sideA() + get_sideB() + get_sideA(); // ���������� ����� ���� ������ ������������(��������)
    else
        P = 0;
    return P;
}

/// <summary>
/// ���������� �������.
/// �������: ����� ���� ������ ������������ ������ ���� ������ ������� �������
/// </summary>
/// <returns>
/// ������� ������������
/// </returns>
double Triangle_coord::calc_area() const
{
    double S;
    double side1 = calc_side(get_x1_coord(), get_y1_coord(), get_x2_coord(), get_y2_coord());
    double side2 = calc_side(get_x1_coord(), get_y1_coord(), get_x3_coord(), get_y3_coord());
    double side3 = calc_side(get_x2_coord(), get_y2_coord(), get_x3_coord(), get_y3_coord());
    if ((((side1 + side2) > side3) && ((side2 + side3) > side1) && ((side1 + side3) > side2)) && ((side1 > 0.0) && (side2 > 0.0) && (side3 > 0.0))) // ���� ����� ���� ������ ������������ ������ ��� ����� ������� �������
    {
        double P = side1 + side2 + side3;
        S = sqrt((P / 2) * ((P / 2) - side1) * ((P / 2) - side2) * ((P / 2) - side3)); // ���������� �������� ������������ �� ������� ������
    }
    else
        S = 0;
    return S;
}

/// <summary>
/// ���������� �������.
/// �������: ����� ���� ������ ������������ ������ ���� ������ ������� �������
/// </summary>
/// <returns>
/// ������� ������������
/// </returns>
double Triangle_sides::calc_area() const
{
    double S;
    if (((get_sideA() + get_sideB()) > get_sideC()) && ((get_sideB() + get_sideC()) > get_sideA()) && ((get_sideA() + get_sideC()) > get_sideB()) && (get_sideA() > 0) && (get_sideB() > 0) && (get_sideC() > 0)) // ���� ����� ���� ������ ������������ ������ ��� ����� ������� �������
    {
        double P = get_sideA() + get_sideB() + get_sideC();
        S = sqrt((P / 2) * ((P / 2) - get_sideA()) * ((P / 2) - get_sideB()) * ((P / 2) - get_sideC())); // ���������� �������� ������������ �� ������� ������
    }
    else
        S = 0;
    return S;
}

/// <summary>
/// ����� ���������� � ������������
/// </summary>
/// <returns>
/// ������ � ����������� � ������������: ���������� ������, ����� ������, �������� � �������
/// </returns>
std::string Triangle_coord::to_string() const
{
    std::string s =
        "Vertexs: (" + std::to_string(get_x1_coord()) + " ; " + std::to_string(get_y1_coord()) + "), (" +
                       std::to_string(get_x2_coord()) + " ; " + std::to_string(get_y2_coord()) + "), (" +
                       std::to_string(get_x3_coord()) + " ; " + std::to_string(get_y3_coord()) + ")\n" +
        "Perimeter: " + std::to_string(calc_perim()) + "\n" +
        "Area: " + std::to_string(calc_area()) + "\n";
    return s;
}

/// <summary>
/// ����� ���������� � ������������
/// </summary>
/// <returns>
/// ������ � ����������� � ������������: ���������� ������, ����� ������, �������� � �������
/// </returns>
std::string Triangle_sides::to_string() const
{
    std::string s =
        "Sides: " + std::to_string(get_sideA()) + " ; " +
        std::to_string(get_sideB()) + " ; " +
        std::to_string(get_sideC()) + "\n" +
        "Perimeter: " + std::to_string(calc_perim()) + "\n" +
        "Area: " + std::to_string(calc_area()) + "\n";
    return s;
}

void Triangle_sides::Safe_file(const std::string& name) const
{
    std::ofstream savefile(name);
    if (!savefile.is_open())
    {
        throw "�� ������� ������� ���� ��� ������";
    }
    else
    {
        savefile << get_sideA() << "\n";
        savefile << get_sideB() << "\n";
        savefile << get_sideC() << "\n";
        savefile << calc_perim() << "\n";
        savefile << calc_area() << "\n";
        savefile.close();
    }

}

Triangle_sides Triangle_sides::Load_file(const std::string& name)
{
    std::ifstream loadfile(name);
    if (!loadfile.is_open())
    {
        throw "�� ������� ������� ���� ��� ������";
    }
    else
    {
        double side1, side2, side3;
        loadfile >> side1 >> side2 >> side3;
        set_sides(side1, side2, side3);
        loadfile.close();
    }
}

void Triangle_coord::Safe_file(const std::string& name) const
{
    std::ofstream savefile(name);
    if (!savefile.is_open())
    {
        throw "�� ������� ������� ���� ��� ������";
    }
    else
    {
        savefile << get_x1_coord() << "\n";
        savefile << get_y1_coord() << "\n";
        savefile << get_x2_coord() << "\n";
        savefile << get_y2_coord() << "\n";
        savefile << get_x3_coord() << "\n";
        savefile << get_y3_coord() << "\n";
        savefile << calc_perim() << "\n";
        savefile << calc_area() << "\n";
        savefile.close();
    }
}

Triangle_coord Triangle_coord::Load_file(const std::string& name)
{
    std::ifstream loadfile(name);
    if (!loadfile.is_open())
    {
        throw "�� ������� ������� ���� ��� ������";
    }
    else
    {
        double x1, x2, x3, y1, y2, y3;
        loadfile >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
        set_all_vert(x1, y1, x2, y2, x3, y3);
        loadfile.close();
    }
}

/// <summary>
/// �������� ������ ������� � �������
/// </summary>
void test()
{
    Triangle Test1;
    Test1.TriangleS = new Triangle_sides(11, 11, 11);
    Triangle Test2;
    Test2.TriangleC = new Triangle_coord(-1, 2, 4, -5, 9, 10);
    Triangle Test3;
    Test3.TriangleS = new Triangle_sides;
    Test3.TriangleS->set_sides(12, 13, 14);
    Triangle Test4;
    Test4.TriangleC = new Triangle_coord;
    Test4.TriangleC->set_all_vert(-1, 5, 5, 5, -7, -6);

    assert(abs(Test3.TriangleS->get_sideA() - 12) < 0.00001); //�������� �������
    assert(abs(Test3.TriangleS->get_sideB() - 13) < 0.00001);
    assert(abs(Test3.TriangleS->get_sideC() - 14) < 0.00001);
    assert(abs(Test1.TriangleS->calc_perim() - 33) < 0.00001);
    assert(abs(Test2.TriangleC->get_x1_coord() - (-1)) < 0.00001);
    assert(abs(Test2.TriangleC->get_y1_coord() - (2)) < 0.00001);
    assert(abs(Test2.TriangleC->get_x2_coord() - (4)) < 0.00001);
    assert(abs(Test2.TriangleC->get_y2_coord() - (-5)) < 0.00001);
    assert(abs(Test2.TriangleC->get_x3_coord() - (9)) < 0.00001);
    assert(abs(Test2.TriangleC->get_y3_coord() - (10)) < 0.00001);
    assert(abs(Test2.TriangleC->calc_area() - 55.0) < 0.00001);
    assert(Test1.TriangleS->to_string() == ("Sides: 11.000000 ; 11.000000 ; 11.000000\nPerimeter: 33.000000\nArea: 52.394537\n"));

    assert(abs(Test4.TriangleC->get_x1_coord() - (-1)) < 0.00001);
    assert(abs(Test4.TriangleC->get_y1_coord() - (5)) < 0.00001);
    assert(abs(Test4.TriangleC->get_x2_coord() - (5)) < 0.00001);
    assert(abs(Test4.TriangleC->get_y2_coord() - (5)) < 0.00001);
    assert(abs(Test4.TriangleC->get_x3_coord() - (-7)) < 0.00001);
    assert(abs(Test4.TriangleC->get_y3_coord() - (-6)) < 0.00001);
    assert(abs(Test4.TriangleC->calc_perim() - (34.80878)) < 0.00001);
    assert(abs(Test4.TriangleC->calc_area() - (33)) < 0.00001);
    assert(Test4.TriangleC->to_string() == ("Vertexs: (-1.000000 ; 5.000000), (5.000000 ; 5.000000), (-7.000000 ; -6.000000)\nPerimeter: 34.808785\nArea: 33.000000\n"));
}