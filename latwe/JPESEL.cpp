#include <iostream>
using namespace std;

int StringInt (char num) {
	switch (num) {
		case '0': return 0;
		case '1': return 1;
		case '2': return 2;
		case '3': return 3;
		case '4': return 4;
		case '5': return 5;
		case '6': return 6;
		case '7': return 7;
		case '8': return 8;
		case '9': return 9;
	}
}
		

bool check (char pesel[]) 
{
	int sum = 0;
	sum += StringInt(pesel[0]);
	sum += 3 * StringInt(pesel[1]);
	sum += 7 * StringInt(pesel[2]);
	sum += 9 * StringInt(pesel[3]);
	sum += StringInt(pesel[4]);
	sum += 3 * StringInt(pesel[5]);
	sum += 7 * StringInt(pesel[6]);
	sum += 9 * StringInt(pesel[7]);
	sum += StringInt(pesel[8]);
	sum += 3 * StringInt(pesel[9]);
	sum += StringInt(pesel[10]);
	
	if (sum != 0 && sum % 10 == 0)
		return true;
	else return false;
}
	

int main() {
	int n;
	char pesel[15];
	
	cin >> n;
	for (int i=0; i<n; i++) {
		cin >> pesel;
		if (check(pesel))
			cout << "D" << endl;
		else cout << "N" << endl;
	}
	
	return 0;
}