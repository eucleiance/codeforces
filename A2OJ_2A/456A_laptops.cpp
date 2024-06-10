#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
  int numberOfLaptops;
  cin >> numberOfLaptops;
  pair<int, int> laptops[numberOfLaptops];
  for (int i = 0; i < numberOfLaptops; i++) {
    cin >> laptops[i].first >> laptops[i].second;
  }
  sort(laptops, laptops + numberOfLaptops);
  for (int i = 0; i < numberOfLaptops - 1; i++) {
    if (laptops[i].first < laptops[i + 1].first && laptops[i].second > laptops[i + 1].second) {
      cout << "Happy Alex" << endl;
      return 0;
    }
  }
  cout << "Poor Alex" << endl;
  return 0;
}
// 2
// 1 1
// 2 2
// Answer = Poor 
// Out = Happy

// 2 -> number of laptops
// 1 2 -> a b -> price quality
// 2 1 -> a b -> price quality
//
// if a1 < a2 && b1 > b2
// cout happy Alex
// else 
// cout poor alex
