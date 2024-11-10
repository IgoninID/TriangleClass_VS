#include <cmath>
#include <string>
#include "Triangle.h"

/// <summary>
/// ����������� ��� ����������
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
/// ����������� � ����������� ��� ��������� ������ ������������
/// �������: ��� ������� �� ������ ���� � ����������� �����������
/// </summary>
/// <param name="x1_coord - ���������� x ������ �������"></param>
/// <param name="x2_coord - ���������� x ������ �������"></param>
/// <param name="x3_coord - ���������� x ������� �������"></param>
/// <param name="y1_coord - ���������� y ������ �������"></param>
/// <param name="y2_coord - ���������� y ������ �������"></param>
/// <param name="y3_coord - ���������� y ������� �������"></param>
Triangle::Triangle(double x1_coord, double x2_coord, double x3_coord, double y1_coord, double y2_coord, double y3_coord)
{
    set_all_vert(x1_coord, y1_coord, x2_coord, y2_coord, x3_coord, y3_coord);
    side_A = 0;
    side_B = 0;
    side_C = 0;
}

/// <summary>
/// ����������� � ����������� ��� ������ ������������
/// �������: ����� ���� ������ ������������ ������ ���� ������ ������� �������
/// </summary>
/// <param name="side_A - ������ ������� ������������"></param>
/// <param name="side_B - ������ ������� ������������"></param>
/// <param name="side_C - ������ ������� ������������"></param>
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
/// ���� ���������� x ������ �������
/// </summary>
/// <param name="x - ���������� x"></param>
void Triangle::set_x1_coord(double x)
{
    x1_coord = x;
}

/// <summary>
/// ���� ���������� x ������ �������
/// </summary>
/// <param name="x - ���������� x"></param>
void Triangle::set_x2_coord(double x)
{
    x2_coord = x;
}

/// <summary>
/// ���� ���������� x ������� �������
/// </summary>
/// <param name="x - ���������� x"></param>
void Triangle::set_x3_coord(double x)
{
    x3_coord = x;
}

/// <summary>
/// ���� ���������� y ������ �������
/// </summary>
/// <param name="y - ���������� y"></param>
void Triangle::set_y1_coord(double y)
{
    y1_coord = y;
}

/// <summary>
/// ���� ���������� y ������ �������
/// </summary>
/// <param name="y - ���������� y"></param>
void Triangle::set_y2_coord(double y)
{
    y2_coord = y;
}

/// <summary>
/// ���� ���������� x ������� �������
/// </summary>
/// <param name="y - ���������� y"></param>
void Triangle::set_y3_coord(double y)
{
    y3_coord = y;
}

/// <summary>
/// ���� ������ �������
/// </summary>
/// <param name="x - ���������� x"></param>
/// <param name="y - ���������� y"></param>
void Triangle::set_first_vert(double x, double y)
{
    set_x1_coord(x);
    set_y1_coord(y);
}

/// <summary>
/// ���� ������ �������
/// </summary>
/// <param name="x - ���������� x"></param>
/// <param name="y - ���������� y"></param>
void Triangle::set_second_vert(double x, double y)
{
    set_x2_coord(x);
    set_y2_coord(y);
}

/// <summary>
/// ���� ������� �������
/// </summary>
/// <param name="x - ���������� x"></param>
/// <param name="y - ���������� y"></param>
void Triangle::set_third_vert(double x, double y)
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
/// ���� ������ ������� ������������.
/// �������: ��������������� �����
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
/// ���� ������ ������� ������������.
/// �������: ��������������� �����
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
/// ���� ������� ������� ������������.
/// �������: ��������������� �����
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
/// ���� ������ ������������.
/// �������: ����� ���� ������ ������������ ������ ���� ������ ������� �������
/// </summary>
/// <param name="fside - ������ ������� ������������"></param>
/// <param name="sside - ������ ������� ������������"></param>
/// <param name="tside - ������ ������� ������������"></param>
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
/// ����� ���������� x ������ �������
/// </summary>
/// <returns>
/// ���������� x ������ �������
/// </returns>
double Triangle::get_x1_coord() const
{
    return x1_coord;
}

/// <summary>
/// ����� ���������� x ������ ������� 
/// </summary>
/// <returns>
///  ���������� x ������ �������
/// </returns>
double Triangle::get_x2_coord() const
{
    return x2_coord;
}

/// <summary>
/// ����� ���������� x ������� ������� 
/// </summary>
/// <returns>
///  ���������� x ������� �������
/// </returns>
double Triangle::get_x3_coord() const
{
    return x3_coord;
}

/// <summary>
/// ����� ���������� y ������ ������� 
/// </summary>
/// <returns>
/// ���������� y ������ �������
/// </returns>
double Triangle::get_y1_coord() const
{
    return y1_coord;
}

/// <summary>
/// ����� ���������� y ������ ������� 
/// </summary>
/// <returns>
/// ���������� y ������ �������
/// </returns>
double Triangle::get_y2_coord() const
{
    return y2_coord;
}

/// <summary>
/// ����� ���������� y ������� �������
/// </summary>
/// <returns>
/// ���������� y ������� �������
/// </returns>
double Triangle::get_y3_coord() const
{
    return y3_coord;
}

/// <summary>
/// ����� ������ ������� ������������
/// </summary>
/// <returns>
/// ����� ������ ������� ������������
/// </returns>
double Triangle::get_sideA() const
{
    return side_A;
}

/// <summary>
/// ����� ������ ������� �����������
/// </summary>
/// <returns>
/// ����� ������ ������� ������������
/// </returns>
double Triangle::get_sideB() const
{
    return side_B;
}

/// <summary>
/// ����� ������� ������� �����������
/// </summary>
/// <returns>
/// ����� ������� ������� ������������
/// </returns>
double Triangle::get_sideC() const
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
double Triangle::calc_side(double first_x, double first_y, double second_x, double second_y)
{
    return sqrt(((first_x - second_x) * (first_x - second_x)) + ((first_y - second_y) * (first_y - second_y))); // ���������� ����� ������� ������������ �� �������
}

/// <summary>
/// ���������� ���������.
/// �������: ����� ���� ������ ������������ ������ ���� ������ ������� ������� 
/// </summary>
/// <param name="sideA - ������ �������"></param>
/// <param name="sideB - ������ �������"></param>
/// <param name="sideC - ������ �������"></param>
/// <returns>
/// �������� ������������
/// </returns>
double Triangle::calc_perim(double sideA, double sideB, double sideC)
{
    if ((sideA + sideB <= sideC) || (sideB + sideC <= sideA) || (sideA + sideC <= sideB)) // ���� ����� ���� ������ ������������ ������ ��� ����� ������� �������
        return sideA + sideB + sideC; // ���������� ����� ���� ������ ������������(��������)
    else
        return 0;
}

/// <summary>
/// ���������� �������.
/// �������: ����� ���� ������ ������������ ������ ���� ������ ������� �������
/// </summary>
/// <param name="sideA - ������ �������"></param>
/// <param name="sideB - ������ �������"></param>
/// <param name="sideC - ������ �������"></param>
/// <returns>
/// ������� ������������
/// </returns>
double Triangle::calc_area(double sideA, double sideB, double sideC)
{
    if ((sideA + sideB <= sideC) || (sideB + sideC <= sideA) || (sideA + sideC <= sideB)) // ���� ����� ���� ������ ������������ ������ ��� ����� ������� �������
        return sqrt(((sideA + sideB + sideC) / 2) * (((sideA + sideB + sideC) / 2) - sideA) * (((sideA + sideB + sideC) / 2) - sideB) * (((sideA + sideB + sideC) / 2) - sideC)); // ���������� �������� ������������ �� ������� ������
    else
        return 0;
}

/// <summary>
/// ����� ���������� � ������������
/// </summary>
/// <returns>
/// ������ � ����������� � ������������: ���������� ������, ����� ������, �������� � �������
/// </returns>
std::string Triangle::to_string() const
{
    std::string s =
        "First vertex: " + std::to_string(x1_coord) + " " + std::to_string(y1_coord) + "\n" +
        "Second vertex: " + std::to_string(x2_coord) + " " + std::to_string(y2_coord) + "\n" +
        "Third vertex: " + std::to_string(x3_coord) + " " + std::to_string(y3_coord) + "\n" +
        "First side: " + std::to_string(side_A) + "\n" +
        "Second side: " + std::to_string(side_B) + "\n" +
        "Third side: " + std::to_string(side_C) + "\n";
    return s;
}