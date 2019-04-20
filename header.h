#pragma once
#include "pch.h"
typedef unsigned long long int longer;

// Функция эйлера, которая принимает вектор и число
// Возвращает phi(number)
longer euler(std::vector < std::pair<longer, int> > * vec, longer & number);

// Функция эйлера, которая принимает число
// Возвращает phi(number)
longer euler(longer & number);

// Факторизация числа
// Возвращает новый нормализованный вектор делителей числа a и их степеней
// Где longer - делитель, а int - его степень
std::vector < std::pair<longer, int> > * factor(longer & a);