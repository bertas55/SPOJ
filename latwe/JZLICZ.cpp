#include <iostream>
using namespace std;
int main()
{
 long long n,
 x = 0,
 numOfChars[200];
 char text[150][1000];

 for (int i=0; i<=200; i++) {
     numOfChars[i] = 0;
 }

 cin >> n;
 cin.ignore(1,'\n');

 for (int i=0; i<n; i++) {

        cin.getline(text[i],1000);
}

 for (int i=0; i<n; i++) {
     for (int j=65; j<=90; j++) {
         for (int k=0; k<201; k++) {
             if ((int)text[i][k] == j)
                numOfChars[j]++;
     }}

     for (int j=97; j<=122; j++) {
         for (int k=0; k<201; k++) {
             if ((int)text[i][k] == j)
                numOfChars[j]++;
     }}
 }


 for (int j=97; j<=122; j++) {
     if (numOfChars[j] > 0)
     cout <<(char)j << " " << numOfChars[j] << endl;
 }

 for (int j=60; j<=90; j++) {
     if (numOfChars[j] > 0)
     cout <<(char)j << " " << numOfChars[j] << endl;
 }

 return 0;
}
