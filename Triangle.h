#pragma once
#include <string>

/// <summary>
/// ����� �����������.
/// ����: ���������� ������, ������� ������������.
/// ������: ���� � ����� ���������, ���������� ��������� � �������.
/// </summary>
class Triangle
{
private: // ��������� ������� - ������ ������ ������ ������
    double x1_coord; // ���������� x ������ �������
    double x2_coord; // ���������� x ������ �������
    double x3_coord; // ���������� x ������� �������
    double y1_coord; // ���������� y ������ �������
    double y2_coord; // ���������� y ������ �������
    double y3_coord; // ���������� y ������� �������
  
    //
    double side_A; // ������ ������� ������������
    double side_B; // ������ ������� ������������
    double side_C; // ������ ������� ������������

public: // ������������� ������� - ������ ��� ������

    /// <summary>
    /// ����������� ��� ����������
    /// </summary>
    Triangle();

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
    Triangle(double x1_coord, double y1_coord, double x2_coord, double y2_coord, double x3_coord, double y3_coord);

    /// <summary>
    /// ����������� � ����������� ��� ������ ������������
    /// </summary>
    /// <param name="side_A - ������ ������� ������������"></param>
    /// <param name="side_B - ������ ������� ������������"></param>
    /// <param name="side_C - ������ ������� ������������"></param>
    Triangle(double side_A, double side_B, double side_C);

    /// <summary>
    /// ���� ���������� x ������ �������
    /// </summary>
    /// <param name="x - ���������� x"></param>
    void set_x1_coord(double x);

    /// <summary>
    /// ���� ���������� x ������ �������
    /// </summary>
    /// <param name="x - ���������� x"></param>
    void set_x2_coord(double x);

    /// <summary>
    /// ���� ���������� x ������� �������
    /// </summary>
    /// <param name="x - ���������� x"></param>
    void set_x3_coord(double x);

    /// <summary>
    /// ���� ���������� y ������ �������
    /// </summary>
    /// <param name="y - ���������� y"></param>
    void set_y1_coord(double y);

    /// <summary>
    /// ���� ���������� y ������ �������
    /// </summary>
    /// <param name="y - ���������� y"></param>
    void set_y2_coord(double y);

    /// <summary>
    /// ���� ���������� x ������� �������
    /// </summary>
    /// <param name="y - ���������� y"></param>
    void set_y3_coord(double y);

    /// <summary>
    /// ���� ������ �������
    /// </summary>
    /// <param name="x - ���������� x"></param>
    /// <param name="y - ���������� y"></param>
    void set_first_vert(double x, double y);

    /// <summary>
    /// ���� ������ �������
    /// </summary>
    /// <param name="x - ���������� x"></param>
    /// <param name="y - ���������� y"></param>
    void set_second_vert(double x, double y);

    /// <summary>
    /// ���� ������� �������
    /// </summary>
    /// <param name="x - ���������� x"></param>
    /// <param name="y - ���������� y"></param>
    void set_third_vert(double x, double y);

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
    void set_all_vert(double x1, double y1, double x2, double y2, double x3, double y3);

    /// <summary>
    /// ���� ������ ������� ������������.
    /// �������: ��������������� �����
    /// </summary>
    /// <param name="side"></param>
    void set_sideA(double side);

    /// <summary>
    /// ���� ������ ������� ������������.
    /// �������: ��������������� �����
    /// </summary>
    /// <param name="side"></param>
    void set_sideB(double side);

    /// <summary>
    /// ���� ������� ������� ������������.
    /// �������: ��������������� �����
    /// </summary>
    /// <param name="side"></param>
    void set_sideC(double side);

    /// <summary>
    /// ���� ������ ������������.
    /// �������: ����� ���� ������ ������������ ������ ���� ������ ������� �������
    /// </summary>
    /// <param name="fside - ������ ������� ������������"></param>
    /// <param name="sside - ������ ������� ������������"></param>
    /// <param name="tside - ������ ������� ������������"></param>
    void set_sides(double fside, double sside, double tside);

    /// <summary>
    /// ����� ���������� x ������ �������
    /// </summary>
    /// <returns>
    /// ���������� x ������ �������
    /// </returns>
    double get_x1_coord() const;

    /// <summary>
    /// ����� ���������� x ������ ������� 
    /// </summary>
    /// <returns>
    ///  ���������� x ������ �������
    /// </returns>
    double get_x2_coord() const;

    /// <summary>
    /// ����� ���������� x ������� ������� 
    /// </summary>
    /// <returns>
    ///  ���������� x ������� �������
    /// </returns>
    double get_x3_coord() const;

    /// <summary>
    /// ����� ���������� y ������ ������� 
    /// </summary>
    /// <returns>
    /// ���������� y ������ �������
    /// </returns>
    double get_y1_coord() const;

    /// <summary>
    /// ����� ���������� y ������ ������� 
    /// </summary>
    /// <returns>
    /// ���������� y ������ �������
    /// </returns>
    double get_y2_coord() const;

    /// <summary>
    /// ����� ���������� y ������� �������
    /// </summary>
    /// <returns>
    /// ���������� y ������� �������
    /// </returns>
    double get_y3_coord() const;

    /// <summary>
    /// ����� ������ ������� ������������
    /// </summary>
    /// <returns>
    /// ����� ������ ������� ������������
    /// </returns>
    double get_sideA() const;

    /// <summary>
    /// ����� ������ ������� �����������
    /// </summary>
    /// <returns>
    /// ����� ������ ������� ������������
    /// </returns>
    double get_sideB() const;

    /// <summary>
    /// ����� ������� ������� �����������
    /// </summary>
    /// <returns>
    /// ����� ������� ������� ������������
    /// </returns>
    double get_sideC() const;

    /// <summary>
    /// ����� ���������� � ������������
    /// </summary>
    /// <returns>
    /// ������ � ����������� � ������������: ���������� ������, ����� ������, �������� � �������
    /// </returns>
    std::string to_string();

    /// <summary>
    /// ���������� ���������.
    /// �������: ����� ���� ������ ������������ ������ ���� ������ ������� ������� 
    /// </summary>
    /// <returns>
    /// �������� ������������
    /// </returns>
    double calc_perim();

    /// <summary>
    /// ���������� �������.
    /// �������: ����� ���� ������ ������������ ������ ���� ������ ������� �������
    /// </summary>
    /// <returns>
    /// ������� ������������
    /// </returns>
    double calc_area();

};

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
double calc_side(double first_x, double first_y, double second_x, double second_y);

/// <summary>
/// �������� ������ ������� � �������
/// </summary>
void test();