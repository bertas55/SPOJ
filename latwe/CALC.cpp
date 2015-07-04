#include <iostream>
using namespace std;
int main() {
    char znak;
    int n, m;
    while (cin >> znak >> n >> m) {
        switch (znak) {
            case '+': { cout << n+m << endl; break; }
            case '-': { cout << n-m << endl; break; }
            case '*': { cout << n*m << endl; break; }
            case '/': { cout << n/m << endl; break; }
            case '%': { cout << n%m << endl; break; }
        }
    }
    return 0;
}
