#include "pch.h"

#include "header.h"


// ‘ункци€ эйлера
longer euler(std::vector < std::pair<longer, int> > * vec, longer & number)
{
	auto temp = long double(number);
	for (auto &i : *vec)
		temp *= 1 - 1.00 / i.first;
	// Ќе забыть удалить вектор
	delete vec;
	return longer(temp);
}

longer euler(longer& number)
{
	auto n = number;
	return euler(factor(number), n);
}

std::vector < std::pair<longer, int> > * factor(longer & a)
{
	auto vec = new std::vector< std::pair<longer, int> >;
	for (longer i = 2; (i ^ 2) <= a; i++)
	{
		// провер€ем делитель
		if (a % i == 0)
		{
			// вставл€ем делитель
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
		vec->emplace_back(a, 1);
	// Ќ≈ќЅя«ј“≈Ћ№Ќќ, “ќЋ№ ќ ”—Ћќ∆Ќя≈“ јЋ√ќ–»“ћ
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