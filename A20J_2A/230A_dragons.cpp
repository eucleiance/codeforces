#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
  int cS, n;
  cin >> cS >> n;
  int eS[n];
  int pG[n];
  for (int i = 0; i < n; i++)
  {
    cin >> eS[i];
    cin >> pG[i];
  }
  
  for (int i = 0; i < n; i++)
  {
    if (cS > eS[i]){
      // huh 
    }
  }

  for (int i = 0; i < n; i++)
  {
    cout << eS[i] << endl;
    cout << pG[i] << endl;
  }
  return 0;
}




// 2 2
// 1 99
// 100 0


// C Strength -> Num of lines
// E Strength -> Power gained by defeating Enemy
// 2nd E Strength -> Power gained by defeating Enemy
