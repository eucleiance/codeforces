#include <iostream>
#include <string>

using namespace std;

int main()
{
  int max_count;
  string inp_word;
  cin >> max_count;
  cin >> inp_word;
  if (inp_word.length() > max_count) {
    cout << inp_word[0] << (inp_word.length() - 2) << inp_word[(inp_word.length() - 1)] << endl;
  } else {
    cout << inp_word << endl;
  }
  return 0;
}
