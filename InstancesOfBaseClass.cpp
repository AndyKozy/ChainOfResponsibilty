#include "InstancesOfBaseClass.h"

void Addition::HandleRequest(char Operator, double x, double y) const {
	if (Operator == '+')
		std::cout << x + y << "\n\n";
	else
	{
		std::cout << "Addition Passed\n";
		CalculatorBase::HandleRequest(Operator, x, y);
	}
}

void Subtraction::HandleRequest(char Operator, double x, double y) const {
	if (Operator == '-')
		std::cout << x - y << "\n\n";
	else
	{
		std::cout << "Subtraction Passed\n";
		CalculatorBase::HandleRequest(Operator, x, y);
	}
}

void Multiplication::HandleRequest(char Operator, double x, double y) const {
	if (Operator == '*')
		std::cout << x * y << "\n\n";
	else
	{
		std::cout << "Multiplication Passed\n";
		CalculatorBase::HandleRequest(Operator, x, y);
	}
}

void Division::HandleRequest(char Operator, double x, double y) const {
	if (Operator == '/')
		std::cout << x / y << "\n\n";
	else
	{
		std::cout << "Division Passed\n";
		CalculatorBase::HandleRequest(Operator, x, y);
	}
}

