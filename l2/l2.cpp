

#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "");
	double radian;
	cout << "Введите значение в радианах: ";
	cin >> radian;
	const double P = 3.14;
	double result = (radian * 180) / P;
	cout << "Значение в градусах: " << result;
	return 0;
}

