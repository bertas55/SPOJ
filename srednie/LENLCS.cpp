#include <iostream>
#include <string>
using namespace std;

int lcsLength (string x, string y)
{
	int m = x.length() - 1;
	int n = y.length() - 1;
	int c[m + 1][n + 1];

	for (int i = 0; i <= m; i++)
		for (int j = 0; j <= n; j++)
			c[i][j] = 0;

	for (int i = 1; i <= m; i++)
		for (int j = 1; j <= n; j++)
		{
			if (x[i] == y[j])
			{
				c[i][j] = c[i-1][j-1] + 1;
			}
			else if (c[i-1][j] >= c[i][j-1])
			{
				c[i][j] = c[i-1][j];
			}
			else
			{
				c[i][j] = c[i][j-1];
			}
		}

	return c[m][n];
}

int main()
{
	string x, y;
	int t, xLength, yLength;

	cin >> t;

	for (int i = 0; i < t; i++)
	{
		cin >> xLength;

		cin >> x;
		x.insert(0, "x");

		cin >> yLength;

		cin >> y;
		y.insert(0, "x");

		cout << lcsLength(x, y) << endl;

		x.clear();
		y.clear();
	}

	return 0;
}
