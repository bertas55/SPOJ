#include <iostream>
#include <string>
using namespace std;

bool operator == (string a, string b) {
     if (a.size() != b.size())
     {
     	return false;
     }
     else 
     {
		for (int i=0; i<a.size(); i++)
		{
			if (a[i] != b[i])
			{
				return false;
			}
        }
          return true;
     }
}

void move (string &a) {
     int tmp;
     tmp = a[0];
     for (int i=1; i<a.size(); i++)
     {
         a[i-1] = a[i];
     }
     a[a.size()-1] = tmp;
}
     

int main() {
    int t;
    bool nsame = false;
    string a, b;
    
    cin >> t;
    
    while (t) {
          cin >> a >> b;
    
          for (int i=0; i<a.size(); i++) {
              if (a == b) {
                 nsame = false;
                 cout << "TAK" << endl;
                 break;
              }
              else
                  move (a);
          }
          if (nsame)
             cout << "NIE" << endl;
          a.clear();
          b.clear();
          nsame = true;
          t--;
    }
    
    return 0;
}
    