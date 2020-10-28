
#include <iostream>
using namespace std;

int main()
{
    setlocale(0, "");
    cout << "Последовательность простых чисел: ";
    for (int x = 2; x < 200; x++)
        for (int y = 2; y < x; y++)
        {
            if (x % y == 0)
                break;
            else if (x == y + 1)
                cout << x << " ";
        }
    return 0;
}

