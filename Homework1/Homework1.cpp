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
	std::cout << "fibonacci_recursive" << "\n";
	std::cout << "sequence 0 = " << fibonacci_recursive(0) << "\n";
	std::cout << "sequence 1 = " << fibonacci_recursive(1) << "\n";
	std::cout << "sequence 2 = " << fibonacci_recursive(2) << "\n";
	std::cout << "sequence 7 = " << fibonacci_recursive(7) << "\n";
	std::cout << "sequence 14 = " << fibonacci_recursive(14) << "\n";
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

	std::cout << "\n";
	std::cout << "NWW" << "\n";
	std::cout << "2 | 6 ->" << NWW(2, 6) << "\n";
	std::cout << "6 | 2 ->" << NWW(6, 2) << "\n";
	std::cout << "15 | 5 ->" << NWW(15, 5) << "\n";
	std::cout << "-2 | -6 ->" << NWW(-2, -6) << "\n";
	std::cout << "-2 | 6 ->" << NWW(-2, 6) << "\n";
	std::cout << "3 | 3 ->" << NWW(3, 3) << "\n";

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
	if (sequence < 2)
	{
		return sequence;
	}

	return fibonacci_recursive(sequence - 1) + fibonacci_recursive(sequence - 2);		
}

int NWW(int a, int b)
{
	bool foundNWW = false;

	int multiplayer = a >= b ? a : b;
	int result = multiplayer;

	while (!foundNWW)
	{
		if (result % a == 0 && result % b == 0)
		{
			foundNWW = true;
		}
		else 
		{
			result += multiplayer;
		}
	}

	return result;
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
