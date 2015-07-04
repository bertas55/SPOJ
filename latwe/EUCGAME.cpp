#include <iostream>
using namespace std;
int main() {
	int t;
	long a, b;
	
	cin >> t;
	for (int i=0; i<t; i++) {
		cin >> a >> b;
		while (a!=b or a<=0 or b<=0) {
			if (a>b)
				a = a-b;
			else
				b = b-a;
				
		}
		cout << a+b << endl;
	}
	
	return 0;
}