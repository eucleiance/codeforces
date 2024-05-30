#include <iostream>
using namespace std;
int main()
{
  int n, l;
  cin >> n >> l;
  bool isR = true;
  for (int i = 1; i <= n; i++)
  {
    if (i % 2 == 0){
      if (isR == true){
        for (int j = 1; j < l; j++){
          cout << '.';
        }
        cout << '#' << endl;
        isR = false;
      } else {
        cout << '#';
        for (int j = 1; j < l; j++){
          cout << '.';
        }
        cout << endl;
        isR = false;
      }
    } else {
      for (int j = 1; j <= l; j++){
        cout << '#';
      }
      cout << endl;
    }
  }
  return 0;
}
