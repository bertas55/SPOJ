#include <iostream>
#include <string>

using namespace std;

bool isContained (string str, string substr)
{
		int str_len = str.length();
		int substr_len = substr.length();
		int index1 = 0, index2 = 0;

		while (index1 < str_len && index2 < substr_len)
    {
			if (str[index1] == substr[index2])
      {
				index1++;
				index2++;
			}
			else
      {
				index1++;
      }
		}

		if (index2 >= substr_len)
    {
			return true;
    }
		else
    {
			return false;
    }
}

int main ()
{
	int t;
	string str, substr;

	cin >> t;

	for (int i = 0; i < t; i++)
  {
		cin >> str >> substr;

		if (isContained(str, substr))
    {
			cout << "Tak\n";
    }
		else
    {
			cout << "Nie\n";
    }
	}

	return 0;
}
