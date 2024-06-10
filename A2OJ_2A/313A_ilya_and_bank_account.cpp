#include <iostream>
#include <string>

using namespace std;

int main() {
  string s;
  cin >> s;

  if (s[0] != '-') {
    cout << s << endl;
    return 0;
  }

  int num = stoi(s);

  int lastDigitRemoved = num / 10;

  int secondLastDigitRemoved = (num / 100) * 10 + num % 10;

  cout << max(lastDigitRemoved, secondLastDigitRemoved) << endl;

  return 0;
}
