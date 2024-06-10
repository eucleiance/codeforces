#include <iostream>
using namespace std;
int main(){
  int n, x, evenC(0), lastEven(0), lastOdd(0);
  cin >> n;
  for (int i = 1; i <= n; i++)
  {
    cin >> x;
    if (x%2 == 0){
      evenC += 1;
      lastEven = i;
    } else {
      evenC -= 1;
      lastOdd = i;
    }
  }
  cout << (evenC > 0 ? lastOdd : lastEven) << endl;
  return 0;
}
