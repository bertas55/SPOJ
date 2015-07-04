#include <iostream>
using namespace std;

int main() {
    long long n, tmp, sum = 0, max = 0;
    
    cin >> n;
    for (int i=0; i<n; i++) {
        cin >> tmp;
        sum += tmp;
        if (sum < 0)
           sum = 0;
        else if (sum > max)
             max = sum;
    }
    
    cout << max;
      
    return 0;
}