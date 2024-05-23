#include <iostream>
#include <string>

using namespace std;

int main() {
  string s, greet;
  cin >> s;
  greet = "hello";
  int c = 0;
  for (int i = 0; i < s.length(); i++){
    if (s[i] == greet[c]){
      c += 1;
    }
  }

  if (c == 5){
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
  return 0;
}
