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
	return 0;
}
