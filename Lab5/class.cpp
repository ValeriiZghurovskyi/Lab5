#include "class.h"

LinearFunction::LinearFunction(double a, double b) {
	this->a = a;
	this->b = b;
}

void LinearFunction::SetA(double a) {
	this->a = a;
}

void LinearFunction::SetB(double b) {
	this->b = b;
}

double LinearFunction::GetA() {
	return a;
}

double LinearFunction::GetB() {
	return b;
}

void LinearFunction::Increase(double n) {
	a += n;
	b += n;
}

void LinearFunction::Decrease(double n) {
	a -= n;
	b -= n;
}

double LinearFunction::FindValue(double x) {
	return a * x + b;
}

QuadraticFunction::QuadraticFunction(double a, double b, double c) {
	this->a = a;
	this->b = b;
	this->c = c;
}

void QuadraticFunction::SetA(double a) {
	this->a = a;
}

void QuadraticFunction::SetB(double b) {
	this->b = b;
}

void QuadraticFunction::SetC(double c) {
	this->c = c;
}

double QuadraticFunction::GetA() {
	return a;
}

double QuadraticFunction::GetB() {
	return b;
}

double QuadraticFunction::GetC() {
	return c;
}

void QuadraticFunction::Increase(double n) {
	a += n;
	b += n;
	c += n;
}

void QuadraticFunction::Decrease(double n) {
	a -= n;
	b -= n;
	c -= n;
}

double QuadraticFunction::FindValue(double x) {
	return a * pow(x, 2) + b * x + c;
}