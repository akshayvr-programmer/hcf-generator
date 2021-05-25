#include <iostream>
using namespace std;

int main()
{
    int x, y;

    cout << "Enter two numbers: ";
    cin >> x >> y;
    
    while(x != y)
    {
        if(x > y)
            x -= y;
        else
            x -= y;
    }

    cout << "HCF = " << x;
    return 0;
}
