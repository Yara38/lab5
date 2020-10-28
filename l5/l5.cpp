
#include <iostream>
using namespace std;

int main()
{
    setlocale(0, "");
    int num, copy_num, count = 0;
    cout << "Введите число " << endl;
    cin >> num;
    if (num >= 10000 && num <= 99999)
    {
        copy_num = num;
        while (copy_num != 0)
        {
            count = count * 10 + copy_num % 10;
            copy_num /= 10;
        }
    }
    if (num == count)
        cout << "Число палиндром " << endl;
    else
        cout << "Число не палиндром " << endl;
    return 0;
}
