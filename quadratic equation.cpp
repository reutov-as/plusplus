#include <iostream>
#include <math.h>
#pragma warning (disable: 4996)

using namespace std;

void Specificsolution(int a, int b, int c) {
	if (b == 0 && c == 0) {
		cout << "Infinite number of solutions";
		return;
	}
	if (b == 0 && c != 0) {
		cout << "No solutions";
		return;
	}
	if (b != 0 && c == 0) {
		cout << "x = 0";
		return;
	}
	if (b != 0 && c != 0) {
		cout << "x = " << -c/b;
		return;
	}

}

double Finddiscriminant(int a, int b, int c) {
	double D = b * b - 4 * a * c;
	return D;
}

void Findsolution(int a, int b, int c) {
	if (a == 0) {
		Specificsolution(a, b, c);
		return;
	}
	double D;
	D = Finddiscriminant(a, b, c);
	if (D < 0) {
		cout << "No solutions";
		return;
	}
	if (D == 0) {
		cout << "x = " << -b / (2 * a);
		return;
	}
	cout << "x1 = " << (-b + sqrt(D)) / (2 * a) << endl;
	cout << "x2 = " << (-b - sqrt(D)) / (2 * a);
	return;
}

int main() {
	int a, b, c;
	cout << "Input a = ";
	cin >> a;
	cout << "Input b = ";
	cin >> b;
	cout << "Input c = ";
	cin >> c;
	Findsolution(a, b, c);
	return 0;
}