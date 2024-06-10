#include <iostream>
using namespace std;
int main(){
  int n;
  cin >> n;
  char chboard[n][n];
  bool even = true;
  for (int i = 0; i < n; i++)
    for (int j = 0; j < n; j++)
      cin >> chboard[i][j];
  
  for (int i = 0; i < n; i++)
  {
    int count = 0;
    for (int j = 0; j < n; j++)
    {
      if ((i - 1) >= 0 && (chboard[i - 1][j] == 'o'))
        count++;
      if ((i + 1) < n && (chboard[i + 1][j] == 'o'))
        count++;
      if ((j - 1) >= 0 && (chboard[i][j - 1] == 'o'))
        count++;
      if ((j + 1) < n && (chboard[i][j + 1] == 'o'))
        count++;
      if (count % 2 == 1)
        even = false;
    }
  }
  if (even == true)
    cout << "YES";
  else if (even == false)
    cout << "NO";
  cout << endl;
  return 0;
}




// 3
// xxo
// xox
// oxx
// YES


// 4
// xxxo
// xoxo
// oxox
// xxxx
// NO
