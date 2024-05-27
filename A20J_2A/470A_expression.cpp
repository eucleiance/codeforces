#include <iostream>

using namespace std;

int main()
{
  int a, b, c;
  cin >> a >> b >> c;
  int cA = 0, cB = 0, cC = 0, cD = 0, cE = 0;
  cA = (a + b * c);
  cB = (a * (b + c));
  cC = (a * b * c);
  cD = ((a + b) * c);
  cE = (a + b + c);

  if ((cA >= cB) && (cA >= cC) && (cA >= cD) && (cA >= cE))
  {
    cout << cA << endl;
  } else if ((cB >= cA) && (cB >= cC) && (cB >= cD) && (cB >= cE))
  {
    cout << cB << endl;
  } else if ((cC >= cA) && (cC >= cB) && (cC >= cD) && (cC >= cE))
  {
    cout << cC << endl;
  } else if ((cD >= cA) && (cD >= cB) && (cD >= cC) && (cD >= cE))
  {
    cout << cD << endl;
  } else if ((cE >= cA) && (cE >= cB) && (cE >= cC) && (cE >= cD))
  {
    cout << cE << endl;
  }
  return 0;
}


// 1+2*3=7
// 1*(2+3)=5
// 1*2*3=6
// (1+2)*3=9

// 1
// 2
// 3

// 9
