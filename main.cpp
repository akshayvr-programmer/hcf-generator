#include <iostream>
#include <cmath>
using namespace std;

int x;
int y;

int getHCF() {
while (x != y) {

    if (x > y) {

        x -= y;

    } else {
        x -= y;


    }
    return abs(x);


}

}

int main()
{
    cin >> x >> y;
    cout << "HCF =" << getHCF();

    return 0;
}
