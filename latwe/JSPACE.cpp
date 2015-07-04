#include <iostream>
#include <string>
using namespace std;

int main() {
	string line;
	int length;
	bool space;
	
	while ( getline (cin, line) ) {
		
		length = line.length();
		space = false;
		
		for (int i = 0; i < length; i++) {
			
			if ( line[i] == ' ')
				space = true;
			else if ( line[i] >= 'a' && line [i] <= 'z'  && space ) {
				
				line[i] = line[i] - 32;
				space = false;
				cout << line[i];
				 
			}
			else if ( space ) {
				
				space = false;
				cout << line[i];
				
			}
			else
				cout << line[i];
			
		}
		
		cout << "\n"; 
		
	}
	
	return 0;
}
