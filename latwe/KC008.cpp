#include <iostream>
using namespace std;

int main() {
    long long sum_2 = 0, sum = 0, tmp;
    
    while (true) {
          cin >> tmp;
          if(cin.peek()==EOF) {
             cout << sum_2 << endl;
             break;
          }
          else if (tmp == 0) {
             cout << sum << endl;
             sum_2 += sum;
             sum = 0;
             continue;
          }
          
          sum += tmp;
    }
    
    return 0;
}