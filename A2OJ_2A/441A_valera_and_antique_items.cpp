#include <iostream>
#include <vector>
using namespace std;
int main()
{
  int n, vM, count(0);
  cin >> n >> vM;
  vector<int> out;
  
  for (int i = 1; i <= n; i++)
  {
    int sN, lastEl;
    cin >> sN;
    for (int j = 0; j < sN; j++)
    {
      int sC;
      cin >> sC;
      if (sC < vM && i != lastEl){
        out.push_back(i);
        count += 1;
        lastEl = i;
      }
    }
  }
  cout << count << endl;
  for (int i = 0; i < count; i++){
    cout << out[i] << " ";
  }
  cout << endl;
  return 0;
}


// 3 50000
// 1 40000
// 2 20000 60000
// 3 10000 70000 190000
//
// 3
// 1 2 3
