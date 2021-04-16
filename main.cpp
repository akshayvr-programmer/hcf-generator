// Online C++ compiler to run C++ program online
#include <iostream>

using namespace std;

int x;
int y;
int q;
int r;


int  getHCF() {
    if (x > y) {
        q = x / y;
        r = x % y;
        
        while (r != 0) {
            x = q;
            y = r;
            
            if (r == 0) {
                return x;
                
            }
        }
        
    }
    
    
    
    if (y > x) {
        q =  y / x;
        r = y % x;
        
        while(r != 0) {
            x = q;
            y = r;
            
            if (r == 0) {
                return y;
                
            }
        }
    }
    
}

int main() {
    cin >> x >> y;
    cout << getHCF() << endl;
    
    
    return 0;
}

