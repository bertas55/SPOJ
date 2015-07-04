#include <iostream>
using namespace std;

int main() {
    string line;
    bool inside;
    
    while (getline (cin, line)) 
    {
      	inside = false;
      	for (int i=0; i<line.length(); i++) 
      	{
          	if (line[i] == '<')
             	inside = true;
          	else if (line[i] == '>')
               	inside = false;
          	else if (inside) 
          	{
               	if (line[i] >= 'a' && line[i] <= 'z')
                  	line[i] = line[i] - 32;
          	}
          
      	}
      	cout << line << endl;
    }
    
    //system ("PAUSE");
    return 0;
}