#include "InstancesOfBaseClass.h"

#include <iostream>

int main() {
	Addition Handler1;
	Subtraction Handler2;
	Multiplication Handler3;
	Division Handler4;

	Handler1.setNextBase(&Handler2);
	Handler2.setNextBase(&Handler3);
	Handler3.setNextBase(&Handler4);
	Handler4.setNextBase(nullptr);

	std::cout << "+ for addition\n- for subtraction\n* for multiplication\n/ for division\n\n";

	double x, y;
	char Operator;

	while (true)
	{
		std::cout << "Enter an operator: ";
		std::cin >> Operator;
		std::cout << "Enter Value 1: ";
		std::cin >> x;
		std::cout << "Enter Value 2: ";
		std::cin >> y;

		Handler1.HandleRequest(Operator, x, y);
	}
}