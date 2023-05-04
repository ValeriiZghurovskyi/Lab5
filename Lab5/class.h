#pragma once
#include <iostream>
#include <cmath>

using namespace std;



class TFunction {
public:
	virtual void Increase(double n) = 0;
	virtual void Decrease(double n) = 0;
	virtual double FindValue(double x) = 0;
};


class LinearFunction : public TFunction {
private:
	double a;
	double b;

public:
	LinearFunction() = default;
	LinearFunction(double a, double b);

	void SetA(double a);
	void SetB(double b);

	double GetA();
	double GetB();

	void Increase(double n) override;
	void Decrease(double n) override;
	double FindValue(double x) override;
};

class QuadraticFunction : public TFunction {
private:
	double a;
	double b;
	double c;

public:
	QuadraticFunction() = default;
	QuadraticFunction(double a, double b, double c);

	void SetA(double a);
	void SetB(double b);
	void SetC(double c);

	double GetA();
	double GetB();
	double GetC();

	void Increase(double n) override;
	void Decrease(double n) override;
	double FindValue(double x) override;
};