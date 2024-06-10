#include <iostream>
using namespace std;
int main()
{
  int mPts, vPts, mSub, vSub, misha, vasya;
  cin >> mPts >> vPts >> mSub >> vSub;
  misha = max(((3 * mPts) / 10), (mPts - (mPts/250) * mSub));
  vasya = max(((3 * vPts) / 10), (vPts - (vPts/250) * vSub));
  if (misha > vasya)
    cout << "Misha" << endl;
  else if (vasya > misha) 
    cout << "Vasya" << endl;
  else 
    cout << "Tie" << endl;
  return 0;
}
