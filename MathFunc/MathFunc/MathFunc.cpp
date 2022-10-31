#include <iostream>
#include <math.h>
#include "addition.h"
#include "subtraction.h"
#include "multiplication.h"
#include "division.h"
#include "exponentiation.h"

double firstNum = 0;
double secondNum = 0;
unsigned short int choice;

int main()
{
	setlocale(LC_ALL, "Russian");

    std::cout << "Введите первое число: ";
	std::cin >> firstNum;

	std::cout << "Введите второе число: ";
	std::cin >> secondNum;

	std::cout << "Выберите операцию(1 - сложение, 2 - вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень): ";
	std::cin >> choice;


	switch (choice)
	{
	case 1:
		std::cout << firstNum << " увеличить на " << secondNum << " = " << Plus(firstNum, secondNum) << "\n";
		break;

	case 2:
		std::cout << firstNum << " уменьшить на " << secondNum << " = " << Minus(firstNum, secondNum) << "\n";
		break;

	case 3:
		std::cout << firstNum << " умножить на " << secondNum << " = " << Umnoj(firstNum, secondNum) << "\n";
		break;

	case 4:
		std::cout << firstNum << " разделить на " << secondNum << " = " << Delen(firstNum, secondNum) << "\n";
		break;

	case 5:
		std::cout << firstNum << " в степени " << secondNum << " = " << Stepen(firstNum, secondNum) << "\n";
		break;
	}
	return 0;
}