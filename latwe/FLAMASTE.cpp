#include <iostream>
#include <string>
#include <sstream>
using namespace std;

string shorten (string word) {
	int wordLen = word.length();
	int ile, i, j;
	string newStr, tmpStr;
	
	
	i = 0;
	while (i < wordLen) 
	{
		newStr.push_back(word[i]);
		j = i + 1;

		while (j < wordLen && word[i] == word[j])
		{
			j++;
		}

		if (j-i == 1 )
		{
			i++;
		}
		if (j-i == 2) 
		{
			newStr.push_back(word[i]);
			i += 2;
		}
		else if (j-i > 2) 
		{
			ostringstream num;
			num << j - i;
			tmpStr = num.str();
			for (int k = 0; k < tmpStr.length(); k++)
			{
				newStr.push_back(tmpStr[k]);
			}

			i = j;
		}
	}
	return newStr;		
}

int main() {
	int n;
	string word;
	
	cin >> n;

	for (int i=0; i<n; i++) 
	{
		cin >> word;
		cout << shorten(word) << endl;
	}
	
	return 0;
}
