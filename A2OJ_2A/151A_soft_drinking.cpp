#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
  int numFriends, numBottles, bottleMl, numLimes, numSlices, gramSalt, minML, minGM;
  cin >> numFriends >> numBottles >> bottleMl >> numLimes >> numSlices >> gramSalt >> minML >> minGM;

  int totalML = numBottles * bottleMl;
  int totalSlices = numLimes * numSlices;

  int toastMl = totalML / minML;    // Total Number of drinks that can be done with the min ML requirement
  int toastGM = gramSalt / minGM;   // Same as above but with Salt

  int perpSlice = totalSlices / numFriends;
  int perpML = toastMl / numFriends;
  int perpGM = toastGM / numFriends;

  int result = min(min(perpSlice, perpML), perpGM);
  cout << result << endl;
  return 0;
}

// minMl -> minimum millilitres of the drink
// one slice of lime 
// minGM -> minimum GM of salt required
