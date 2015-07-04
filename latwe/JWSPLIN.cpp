#include <iostream>
using namespace std;
int main() {
    int xa, xb, xc, ya, yb, yc, t;
    
    cin >> t;
    
    for (int i=0; i<t; i++) {
        cin >> xa >> ya >> xb >> yb >> xc >> yc;
        if (xa*yb + xb*yc + xc*ya - xc*yb - xb*ya - xa*yc == 0)
           cout << "TAK" << endl;
        else
            cout << "NIE" << endl;
    }
    
    return 0;
}