#include <iostream>

using namespace std;

int main()
{
  int tCount;
  cin >> tCount;
  int tCol[tCount][2];
  int count = 0;
  for (int i = 0; i < tCount; i++)
  {
    for (int j = 0; j < 2; j++)
    {
      cin >> tCol[i][j];
    }
  }
  
  for (int i = 0; i < tCount; i++)
  {
    for (int j = 0; j < tCount; j++)
    {
      if (tCol[i][0] == tCol[j][1])
      {
        count = count + 1;
      }
    }
  }
  cout << count << endl;
  return 0;
}

// 3 -> Teams
// 1 2  -> Team 1 -> Home + Away
// 2 4  -> Team 2 -> Home + Away
// 3 4  -> Team 3 -> Home + Away

// 2D Vector
// int main()
// {
//   int tCount;
//   cin >> tCount;
//   vector<vector<int>> tCol;
//   int col;
//   for (int i = 0; i < tCount; i++)
//   {
//     vector<int> colHA;
//     for (int j = 0; j < 2; j++)
//     {
//       cin >> col;
//       colHA.push_back(col);
//     }
//     tCol.push_back(colHA);
//   }
//
//   for (int i = 0; i < tCount; i++)
//   {
//     for (int j = 0; j < 2; j++)
//     {
//       cout << tCol[i][j];
//     }
//     cout << endl;
//   }
//   return 0;
// }
