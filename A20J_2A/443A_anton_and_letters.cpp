#include <iostream>
#include <map>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
  string str;
  getline(cin, str);
  map<char, int> antonMap;
  str.erase(remove(str.begin(), str.end(), ' '), str.end());
  for (char ch : str)
  {
    if(isalpha(ch))
    {
      if(antonMap.find(ch) == antonMap.end())
      {
        antonMap[ch] = 1;
      }
    }
  }
  cout << antonMap.size() << endl;
  return 0;
}
