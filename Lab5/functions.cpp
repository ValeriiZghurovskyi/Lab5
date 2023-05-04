#include "functions.h"
#include <iostream>
#include <stdlib.h>
#include <time.h>


/*double GetRandomNumber(double min, double max) {
	srand(time(NULL));
	double random = min + static_cast<float>(rand()) * static_cast<float>(max - min) / RAND_MAX;
	return random;
}*/

double GetRandomNumber(int min, int max) {
	return min + rand() % (max - min + 1);
}

void generateFunctions(LinearFunction* linearfunction, int num) {
	for (int i = 0; i < num; i++) {
		linearfunction[i].SetA(GetRandomNumber(0, 100));
		linearfunction[i].SetB(GetRandomNumber(0, 100));
	}
}

void generateFunctions(QuadraticFunction* quadraticfunction, int num) {
	for (int i = 0; i < num; i++) {
		quadraticfunction[i].SetA(GetRandomNumber(0, 100));
		quadraticfunction[i].SetB(GetRandomNumber(0, 100));
		quadraticfunction[i].SetC(GetRandomNumber(0, 100));
	}
}

void printfunctions(LinearFunction* linearfunction, int num) {
	for (int i = 0; i < num; i++) {
		cout << "\n----------------------------------" << endl;
		cout << "Linear function #" << i + 1 << ":" << endl;
		cout << linearfunction[i].GetA() << "x + " << linearfunction[i].GetB();
	}
}

void printfunctions(QuadraticFunction* quadraticfunction, int num) {
	for (int i = 0; i < num; i++) {
		cout << "\n----------------------------------" << endl;
		cout << "Quadratic function #" << i + 1 << ":" << endl;
		cout << quadraticfunction[i].GetA() << "x^2 + " << quadraticfunction[i].GetB()<<"x + " << quadraticfunction[i].GetC();
	}
}

void increaselinearfunctions(LinearFunction* linearfunction, int num) {
	for (int i = 0; i < num; i++) {
		linearfunction[i].Increase(3);
	}
}

void decreasequadraticfunctions(QuadraticFunction* quadraticfunction, int num) {
	for (int i = 0; i < num; i++) {
		quadraticfunction[i].Decrease(2);
	}
}

void printmaxfunctions(LinearFunction* linearfunction, int n, QuadraticFunction* quadraticfunction, int m, double x) {
	int maxn = 0, maxm = 0;
	for (int i = 1; i < n; i++) {
		if (linearfunction[i].FindValue(x) > linearfunction[maxn].FindValue(x)) {
			maxn = i;
		}
	}
	for (int i = 1; i < m; i++) {
		if (quadraticfunction[i].FindValue(x) > quadraticfunction[maxm].FindValue(x)) {
			maxm = i;
		}
	}

	if (quadraticfunction[maxm].FindValue(x) > linearfunction[maxn].FindValue(x)) {
		cout << "Function with the greatest value - Quadratic function #" << maxm + 1 << ": ";
		cout << quadraticfunction[maxm].GetA() << "x^2 + " << quadraticfunction[maxm].GetB() << "x + " << quadraticfunction[maxm].GetC();
	}
	else {
		cout << "Function with the greatest value - Linear function #" << maxn + 1 << ": ";
		cout << linearfunction[maxn].GetA() << "x + " << linearfunction[maxn].GetB();
	}
	cout << "\n\n\n";
}
