#include <iostream>
#include <vector>
#include <Windows.h>

std::string revertBoolName(bool value)
{
	if (value == false)
		return "false";
	else return "true ";
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	//Выполнение задания 1
	std::cout << "Выполнение задания 1 \n\n";

	std::vector<bool> a1 = { true, false, true, false };
	std::vector<bool> b1 = { true, true, false, false };

	std::cout << "Оператор: || \n";
	for (int i = 0; i < 4; i++)
	{
		std::cout << revertBoolName(a1.at(i)) << " ";
		std::cout << revertBoolName(b1.at(i)) << " ";
		std::cout << revertBoolName(a1.at(i) || b1.at(i));
		std::cout << "\n";
	}

	std::cout << "\nОператор: && \n";
	for (int i = 0; i < 4; i++)
	{
		std::cout << revertBoolName(a1.at(i)) << " ";
		std::cout << revertBoolName(b1.at(i)) << " ";
		std::cout << revertBoolName((a1.at(i) && b1.at(i)));
		std::cout << "\n";
	}
}