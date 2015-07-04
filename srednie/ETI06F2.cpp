#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
	int n;
	string result;
	stack <int> dist;
	
	cin >> n;
	
	n++;
	
	while (n > 1) {
		
		dist.push(n);

		n = n / 2;
	}
	
	while (!dist.empty()) {
		
		if (dist.top() % 2 == 0)
			result.push_back('5');
		else
			result.push_back('6');
			
		dist.pop();
		
	}
	
	cout << result << "\n";
	
	return 0;
}
