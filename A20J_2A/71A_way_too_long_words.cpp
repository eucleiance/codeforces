#include <iostream>
#include <string>

using namespace std;

int main()
{
  int total_words;
  string inp_word;
  cin >> total_words;
  while (total_words--)
  {
    cin >> inp_word;
    if (inp_word.length() > 10) {
      cout << inp_word[0] << (inp_word.length() - 2) << inp_word[(inp_word.length() - 1)] << endl;
    } else {
      cout << inp_word << endl;
    }
  }
  return 0;
}
