#include <iostream>
#include <string>
using namespace std;

int main()
{
	int t, n_floors;
	int counter = 0, max, min;
	bool quit = false;
	string moves;

	cin >> t;

	for (int i=0; i<t; i++)
  {
		cin >> n_floors;
		cin >> moves;

		max = n_floors - 1;
		min = -n_floors + 1;

		for (int j=0; j<moves.length(); j++)
    {
			if (moves[j] == 'U')
      {
				counter++;

				if (max - min > n_floors - 1)
        {
				    min++;
        }
			}
			else
      {
			  counter--;

				if (max - min > n_floors - 1)
        {
					max--;
        }
			}

			if ((counter > max) || (counter < min))
      {
				cout << "NIE\n";
				quit = true;
				break;
			}
		}

		counter = 0;

		if (quit == false)
    {
			cout << "TAK\n";
    }
		else
    {
			quit = false;
    }
	}

	return 0;
}
