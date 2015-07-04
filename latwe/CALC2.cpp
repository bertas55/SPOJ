#include <iostream>
using namespace std;
int main() {
    int memory[12], n1, n2;
    char c;

    for (int i = 0; i < 10; i++)
    {
        memory[i] = 0;
    }

    while (cin >> c) 
    {
      if (c == 'z') 
      {
         cin >> n1;
         cin >> memory[n1];
         continue;
      }
      if (c == '+') 
      {
         cin >> n1;
         cin >> n2;
         cout << memory[n1] + memory[n2] << endl;
         continue;
      }
      if (c == '-') 
      {
         cin >> n1;
         cin >> n2;
         cout << memory[n1] - memory[n2] << endl;
         continue;
      }
      if (c == '*') 
      {
         cin >> n1;
         cin >> n2;
         cout << memory[n1] * memory[n2] << endl;
         continue;
      }
      if (c == '/') 
      {
         cin >> n1;
         cin >> n2;
         cout << memory[n1] / memory[n2] << endl;
         continue;
      }
      if (c == '%') 
      {
         cin >> n1;
         cin >> n2;
         cout << memory[n1] % memory[n2] << endl;
         continue;
      }
    }

    return 0;
}
