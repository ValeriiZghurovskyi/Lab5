#pragma once
#include "class.h"

double GetRandomNumber(int min, int max);

void generateFunctions(LinearFunction* linearfunction, int num);
void generateFunctions(QuadraticFunction* quadraticfunctions, int num);

void printfunctions(QuadraticFunction* quadraticfunction, int num);
void printfunctions(LinearFunction* linearfunction, int num);

void increaselinearfunctions(LinearFunction* linearfunction, int num);
void decreasequadraticfunctions(QuadraticFunction* quadraticfunction, int num);

void printmaxfunctions(LinearFunction* linearfunction, int n, QuadraticFunction* quadraticfunction, int m, double x);