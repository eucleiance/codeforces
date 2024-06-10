#include<iostream>
#include<algorithm>
using namespace std;

int main() {
  long int characterS, dCount, dStrength, gPoints;
  pair<int, int> dragon[1000];

  while (cin >> characterS >> dCount) {
    int can_defeat = 1;
    for (int i = 0; i < dCount; i++) {
      cin >> dragon[i].first >> dragon[i].second;
    }
    sort(dragon, dragon + dCount);
    for (int i = 0; i < dCount; i++) {
      if (characterS <= dragon[i].first) {
        can_defeat = 0;
        break;
      } else {
        characterS += dragon[i].second;
      }
    }
    if (can_defeat == 0)
    {
      cout << "NO\n";
      return 0;
    }
    else
    {
      cout << "YES\n";
      return 0;
    }
  }
  return 0;
}
