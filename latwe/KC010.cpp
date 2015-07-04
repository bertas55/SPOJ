#include <iostream>
#include <string>
using namespace std;
int main() {
    string txt;
    int words = 0, numbers = 0;
    
    while (cin >> txt) {
          //if (txt.length() == 0)
          //  continue;
          if ((txt[0] >= 'a' && txt[0] <= 'z') || (txt[0] >= 'A' && txt[0] <= 'Z')) 
             words++;
          else 
             numbers++;

    
          if(cin.peek()=='\n') {
             cout << numbers << " " << words << endl;
             numbers = 0; words = 0; 
             txt.clear();
          }
          if (cin.peek()== EOF)
             break;
          txt.clear();
    }
    
    return 0;
}