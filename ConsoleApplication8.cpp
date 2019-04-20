// ConsoleApplication8.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include <vector>
#include <algorithm>

typedef unsigned long long int longer;

// Функция эйлера
longer euler(std::vector < std::pair<int, longer> > * vec, longer & number)
{
	auto temp = long double(number);
	for (auto &i : *vec)
		temp *= 1 - 1.00 / i.first;
	delete vec;
	return longer(temp);

}

// Факторизация числа
std::vector < std::pair<int, longer> > * factor(longer & a)
{
	auto vec = new std::vector < std::pair<int, longer> >;
	for (longer i = 2; (i ^ 2) <= a; i++)
	{
		// проверяем делитель
		if (a % i == 0)
		{
			// вставляем делитель
			vec->emplace_back(i, 0);
			// считаем степени
			while (a % i == 0)
			{
				a /= i;
				vec->back().second++;
			}
		}
	}
	if (a > 1)
	{
		vec->emplace_back(a, 1);

	}
	// сортируем вектор
	std::sort(vec->begin(), vec->end());
	std::cout << vec->size() << "\n";
	// выводим вектор
	for (auto& an : *vec)
	{
		std::cout << an.first << ":" << an.second << "\n";
	}
	return vec;
}

int main()
{

	longer def_n;
	std::cin >> def_n;
	auto n = def_n;
	std::cout << euler(factor(def_n), n);

	return 0;
}
