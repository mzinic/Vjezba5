#include <iostream>
#include <cmath>

using namespace std;

double izracunaj(double a, double b, char op);

int main()
{
	string inputa, inputb;
	double a, b;
	char op;
	a = 0;
	while (a == 0)
	{
		cout << "\nupisi prvi broj: ";
		cin >> inputa;
		a = atof(inputa.c_str());
	}
	cout << "upisi operaciju koju zelis: ";
	cin >> op;
	b = 0;
	while (b == 0)
	{
		cout << "\nupisi drugi broj: ";
		cin >> inputb;
		b = atof(inputb.c_str());
	}

	double rezultat;

	rezultat = izracunaj(a, b, op);

	cout << "tvoj rezultat je: " << rezultat << endl;
	
	return 0;
}

double izracunaj(double x, double y, char z)
{

	if (z == '+') {
		return x + y;
	}
	else if (z == '-') {
		return x - y;
	}
	else if (z == '/') {
		return x / y;
	}
	else if (z == '*') {
		return x * y;
	}
	else {
		cout << "\nnetocna informacija";
		cout << "\npokusaj ponovno";
		cout << "\n";
		cout << "\n";
		main();
		exit(99);

	}

}