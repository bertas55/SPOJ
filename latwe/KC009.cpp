#include <iostream>
#include <string>
using namespace std;

int main() {
    string word;
    int length;
    char tmp;
    while (cin >> word) {
        dl = word.length();
        for (int i=0; i<length/2; i++) {
            tmp = word[i];
            word[i] = word[length-i-1];
            word[length-i-1] = tmp;
        }
        cout << word << endl;
        word.clear();
    }
    return 0;
}