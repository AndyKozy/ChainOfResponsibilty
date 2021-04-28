#ifndef BASECLASS_H
#define BASECLASS_H

#include <iostream>

class CalculatorBase {
public:
	virtual void setNextBase(CalculatorBase* next);
	virtual ~CalculatorBase() = default;
	virtual void HandleRequest(char Operator, double x, double y) const;
private:
	CalculatorBase* next = nullptr;
};

#endif // !BASECLASS_H