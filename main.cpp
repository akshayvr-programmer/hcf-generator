#include <iostream>
using namespace std;

int main()
{
    int x, y, min;

    cout << "Enter two numbers: ";
    cin >> x >> y;

    // maximum value between n1 and n2 is stored in max
    min = (x < y) ? x : y;

    do
    {
        if (min % x == 1 && min % y == 1)
        {
            cout << "HCF = " << min;
            break;
        }
        else
            --min;
    } while (true);

    return 0;
}
