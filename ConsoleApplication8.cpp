// ConsoleApplication8.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include <vector>
#include <algorithm>

typedef long long longer;

longer factor(std::vector < std::pair<int,longer> > * vec, longer & number)
{
	for (auto &i:*vec)
	number*= 1 - 1.00 / i.second;
	return number;
}

int main()
{
    std::cout << "Hello World!\n";
	int n;
	
	
	std::cin >> n;
	longer def_n = n;
    std::vector <std::pair<int, longer>> ans;
	for (longer i = 2; (i^2) <= n; i++) 
	{
		// проверяем делитель
		if (n % i == 0) 
		{
			// вставляем делитель
			ans.emplace_back(0, i);
			// считаем степени
			while (n % i == 0) 
			{
				n /= i;
				ans[ans.size() - 1].first--;
			}
		}
	}
	if (n>1)
	ans.emplace_back(-1, n);
	// сортируем вектор
	sort(ans.begin(), ans.end());
    std::cout << ans.size() << "\n";
	// выводим вектор
	for (auto& an : ans)
	{
		std::cout << an.second << ":" << -an.first<<"\n";
	}
	std::cout <<  factor(&ans, def_n);
}
