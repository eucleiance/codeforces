#include <iostream>
#include <string>
using namespace std;
int main()
{

  string s;
  cin >> s;
  string newS = s;
  int wCount = s.length();
  int cW, cU, cB;

  for (int i = 0; i < s.length(); i++)
  {
    cW = i, cU = i + 1, cB = i + 2;
    if (s[cW] == 'W' && s[cU] == 'U' && s[cB] == 'B')
    {
      newS[cW] = '0';
      newS[cU] = '0';
      newS[cB] = '0';
    }
  }
  for (int i = 0; i < s.length(); i++)
  {
    if (newS[i] != '0' && newS[i+1] != '0')
    {
      cout << newS[i];
    } else if (newS[i] != '0' && newS[i+1] == '0')
    {
      cout << newS[i] << ' ';
    }
  }
  cout << endl;
  return 0;
}
// WUBWEWUBAREWUBWUBTHEWUBCHAMPIONSWUBMYWUBFRIENDWUB
// WUB WE WUB ARE WUB WUB THE WUB CHAMPIONS WUB MY WUB FRIEND WUB
// WE ARE THE CHAMPIONS MY FRIEND 
