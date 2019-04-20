// ConsoleApplication8.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include "header.h"



int main()
{

	longer def_n;
	std::cin >> def_n;
	auto n = def_n;
	std::cout << euler(factor(def_n), n);

	return 0;
}
