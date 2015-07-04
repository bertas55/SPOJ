#include <iostream>
using namespace std;

int main () 
{
    float a, b, c;
    
    cin >> a >> b >> c;
    
    if (a == 0) 
    {
       if (b == c)
          cout << "NWR" << endl;
       else 
            cout << "BR" << endl;
    }
    else
         printf("%.2lf\n", (c-b)/a);

    system ("PAUSE");
    return 0;
}