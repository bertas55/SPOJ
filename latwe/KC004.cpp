#include <iostream>
using namespace std;
int main() 
{
    int number, sequence, x, howMany = 0;
    while (cin >> x >> sequence) {

        for (int i=0; i<sequence; i++) {
            cin >> number;
            if (number == x)
               howMany++;
            }
        cout << howMany << endl;
        howMany = 0;
    }
    return 0;
}