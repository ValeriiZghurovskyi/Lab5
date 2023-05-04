#include "class.h"
#include "functions.h"

using namespace std;


int main() {
	srand(time(NULL));
	cout << "Enter nums of linear functions: ";
	int n;
	cin >> n;
	cout << "Enter nums of quadratic functions: ";
	int m;
	cin >> m;

	LinearFunction* linearfunction = new LinearFunction[n];
	QuadraticFunction* quadraticfunctions = new QuadraticFunction[m];

	generateFunctions(linearfunction, n);
	generateFunctions(quadraticfunctions, m);
	
	cout << "\n\nFunctions before changes:";
	printfunctions(linearfunction, n);
	printfunctions(quadraticfunctions, m);

	increaselinearfunctions(linearfunction, n);
	decreasequadraticfunctions(quadraticfunctions, m);

	cout << "\n\n\nFunctions after changes:";
	printfunctions(linearfunction, n);
	printfunctions(quadraticfunctions, m);

	cout << "\n\nEnter x: ";
	double x;
	cin >> x;
	cout << "\n\n";

	printmaxfunctions(linearfunction, n, quadraticfunctions, m, x);

	return 0;
}