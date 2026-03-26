#include <iostream>
#include <Windows.h>

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	//Выполнение задания 2
	std::cout << "\nВыполнение задания 2 \n\n";

	int number1 = 0;
	int number2 = 0;
	int number3 = 0;

	std::cout << "Введите первое число:";
	std::cin >> number1;
	std::cout << "Введите второе число:";
	std::cin >> number2;
	std::cout << "Введите третье число:";
	std::cin >> number3;

	int maxNumber = number1 > number2
		? number1 > number3
		? number1 : number3
		: number2 > number3
		? number2 : number3;

	int minNumber = number1 < number2
		? number1 < number3
		? number1 : number3
		: number2 < number3
		? number2 : number3;

	int centerNumber = (number1 != minNumber && number1 != maxNumber) ? number1 :
		(number2 != minNumber && number2 != maxNumber) ? number2 : number3;

	std::cout << "Результат: ";
	std::cout << maxNumber << " ";
	std::cout << centerNumber << " ";
	std::cout << minNumber << " \n";
}