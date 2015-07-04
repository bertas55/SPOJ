#include <iostream>
#include <cmath>
using namespace std;
int main() {
    float a, b, c;
    
    while (cin >> a >> b >> c) {
          abs(a);
          abs(c);
          abs(b);
          if (a + b > c)
             if (b + c > a) 
                if (c + a > b) {
                   cout << "1" << endl;
                   continue;
                }

          cout << "0" << endl;
    }
    
    return 0;
}