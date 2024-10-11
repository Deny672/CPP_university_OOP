#include "bringing_to_degree.h"
#include <iostream>
#include <math.h>
using namespace std;

bringing_to_degree bringing_to_degree::Init(double f, double s, double r)
{
    bringing_to_degree tmp;
    tmp.first = f;
    tmp.second = s;
    tmp.res = r;
    return tmp;
}
void bringing_to_degree::Read()
{
    cout << "input first" << endl;
    cin >> first;
    cout << "input second" << endl;
    cin >> second;
    cout << endl;
}
void bringing_to_degree::Display()
{
    cout << "res = " << res << endl;
}

bringing_to_degree bringing_to_degree::Power(bringing_to_degree m) {
    bringing_to_degree temp{};

    // �������� �� ������� ������ � ��'����� �������� (0^(-b) �� ���������)
    if (m.first == 0 && m.second < 0) {
        throw ("��������� ������� ���� �� ��'������ �������.");
    }

    // �������� �� ��'���� ������ � �������� �������� (��� �������� ����������� �����)
    if (m.first < 0 && m.second != static_cast<int>(m.second)) {
        throw ("��������� ������� ��'���� ����� �� ��������� ������� ��� ������������ ����������.");
    }

    // ���� �������� �������, ��������� pow()
    temp.res = std::pow(this->first, this->second);
    return temp;
}

