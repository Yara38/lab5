
#include <iostream>
using namespace std;

int main()
{
	int x, y, z;
	setlocale(0, "");
	cout << "Введите перове число: ";
	cin >> x;
	cout << "Введите второе число: ";
	cin >> y;
	cout << "Введите третье число: ";
	cin >> z;
	double result = (x + y + z) / 3;
	cout << "Среднее арифметическое трёх чисел: " << result;
	return 0;
}

