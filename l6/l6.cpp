

#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "");
	double x;
	cout << "Введите растсояние в милях: ";
	cin >> x;
	double res1 = x * 1.609;
	double res2 = x * 5280.002;
	cout << "Растояние в км: " << res1;
	cout << "\nРасстояние в футах: " << res2;
	return 0;
}
