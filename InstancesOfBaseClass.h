#ifndef INSTANCESOFBASECLASS_H
#define INSTANCESOFBASECLASS_H

#include "BaseClass.h"
#include <iostream>

class Addition : public CalculatorBase {
public:
	void HandleRequest(char Operator, double x, double y) const override;
private:
	CalculatorBase* next = nullptr;
};

class Subtraction : public CalculatorBase {
public:
	void HandleRequest(char Operator, double x, double y) const override;
private:
	CalculatorBase* next = nullptr;
};

class Multiplication : public CalculatorBase {
public:
	void HandleRequest(char Operator, double x, double y) const override;
private:
	CalculatorBase* next = nullptr;
};

class Division : public CalculatorBase {
public:
	void HandleRequest(char Operator, double x, double y) const override;
private:
	CalculatorBase* next = nullptr;
};

#endif // !INSTANCESOFBASECLASS_H