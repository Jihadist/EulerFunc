#pragma once
#include "pch.h"
typedef unsigned long long int longer;

// Функция эйлера
// Возвращает phi(number)
longer euler(std::vector < std::pair<longer, int> > * vec, longer & number);

// Факторизация числа
// Возвращает новый нормализованный вектор делителей числа a и их степеней
std::vector < std::pair<longer, int> > * factor(longer & a);