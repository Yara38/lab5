
#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "");
	double const P = 3.1415926535;
	double R;
	cout << "Введите радиус: ";
	cin >> R;
	double S = P * (R * R);
	cout << "Площадь круга = " << S;
	return 0;
}
