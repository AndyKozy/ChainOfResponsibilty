#include "BaseClass.h"

void CalculatorBase::setNextBase(CalculatorBase* n) {
	next = n;
}

void CalculatorBase::HandleRequest(char Operator, double x, double y) const {
	if (next != nullptr)
		next->HandleRequest(Operator, x, y);
	else
		std::cout << "Not a function\n\n";
}
