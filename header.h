#pragma once
#include "pch.h"
typedef unsigned long long int longer;

// ������� ������, ������� ��������� ������ � �����
// ���������� phi(number)
longer euler(std::vector < std::pair<longer, int> > * vec, longer & number);

// ������� ������, ������� ��������� �����
// ���������� phi(number)
longer euler(longer & number);

// ������������ �����
// ���������� ����� ��������������� ������ ��������� ����� a � �� ��������
// ��� longer - ��������, � int - ��� �������
std::vector < std::pair<longer, int> > * factor(longer & a);