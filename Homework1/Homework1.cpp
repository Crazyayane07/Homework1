#include "Homework1.h"
#include <string>

int main() {

	std::cout << "Zadanie 1:" << "\n";
	std::cout << "\n";

	std::cout << "2 + 6 = " << calculate("add", 2, 6) << "\n";
	std::cout << "-2 + 6 = " << calculate("add", -2, 6) << "\n";
	std::cout << "-2 + -6 = " << calculate("add", -2, -6) << "\n";
	std::cout << "\n";

	std::cout << "2 - 6 = " << calculate("substract", 2, 6) << "\n";
	std::cout << "-2 - 6 = " << calculate("substract", -2, 6) << "\n";
	std::cout << "-2 - -6 = " << calculate("substract", -2, -6) << "\n";
	std::cout << "\n";

	std::cout << "2 * 6 = " << calculate("multiply", 2, 6) << "\n";
	std::cout << "-2 * 6 = " << calculate("multiply", -2, 6) << "\n";
	std::cout << "-2 * -6 = " << calculate("multiply", -2, -6) << "\n";
	std::cout << "\n";

	std::cout << "2 / 6 = " << calculate("divide", 2, 6) << "\n";
	std::cout << "-2 / 6 = " << calculate("divide", -2, 6) << "\n";
	std::cout << "-2 / -6 = " << calculate("divide", -2, -6) << "\n";
	std::cout << "\n";

	std::cout << "-2 / -6 = " << calculate("bzdury", -2, -6) << "\n";
	std::cout << "\n";
	std::cout << "\n";

	std::cout << "Zadanie 2:" << "\n";
	std::cout << "\n";

	std::cout << "\n";

	std::cout << "Zadanie 3:" << "\n";
	std::cout << "\n";
	std::cout << "NWD" << "\n";
	std::cout << "10 | 6 ->" << NWD(10, 6) << "\n";
	std::cout << "6 | 10 ->" << NWD(6, 10) << "\n";
	std::cout << "15 | 5 ->" << NWD(15, 5) << "\n";
	std::cout << "100 | 75 ->" << NWD(100, 75) << "\n";
	std::cout << "-10 | -6 ->" << NWD(-10, -6) << "\n";
	std::cout << "-10 | 6 ->" << NWD(-10, 6) << "\n";
	std::cout << "3 | 3 ->" << NWD(3, 3) << "\n";

	return 0;
}

std::string calculate(const std::string& command, int first, int second)
{
	double result;

	if (command == "add") 
	{
		result = first + (double)second;
		return std::to_string(result);
	}
	else if (command == "substract")
	{
		result = first - (double)second;
		return std::to_string(result);
	}
	else if (command == "multiply")
	{
		result = first * (double)second;
		return std::to_string(result);
	}
	else if (command == "divide")
	{
		result = first / (double)second;
		return std::to_string(result);
	}

	return "Invalid data";
}

int fibonacci_iterative(int sequence)
{
	return 0;
}

int fibonacci_recursive(int sequence)
{
	return 0;
}

int NWW(int a, int b)
{
	return 0;
}

int NWD(int a, int b)
{
	int minValue = abs(a) >= abs(b) ? abs(b) : abs(a);
	int maxValue = abs(a) >= abs(b) ? abs(a) : abs(b);

	if (minValue > 1)
	{
		minValue = 1;
	}

	if (b == a) 
	{
		return a;
	}

	int result = minValue;
	for (int i = minValue; i <= maxValue; i++)
	{
		if (i == 0) 
		{
			continue;
		}

		if (a%i == 0 && b%i == 0) 
		{
			result = i;
		}
	}

	return result;
}
