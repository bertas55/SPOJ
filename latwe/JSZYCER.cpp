#include <iostream>
#include <string>
using namespace std;
int main() {
    string text;
    
    while (cin >> text) {
          for (int i=0; i<text.length(); i++) {
              if (text[i] == 'Z') {
                 text[i] = 'C';
                 continue;
              }
              if (text[i] == 'Y') {
                 text[i] = 'B';
                 continue;
              }
              if (text[i] == 'X') {
                 text[i] = 'A';
                 continue;
              }
              text[i] += 3;
          }
          cout << text << " ";
    
    }
    return 0;
}