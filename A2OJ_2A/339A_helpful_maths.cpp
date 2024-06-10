#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
  string s;
  cin >> s;

  int numbers[100]; 
  // Assuming the maximum length of the input string is 100
  int count = 0; 
  // Number of integers extracted
  for (int i = 0; i < s.size(); i += 2) {
    numbers[count++] = s[i] - '0';
    // Subtracting '0' from the number because 0 is the character literal representing the digit zero
    // Subtracting '0' from '5' evaluates to number 5
    // count++ is post increment operator so it increments the value after an expression is computed
    // ++count is pre increment operator that increments count before the expression is computed
  }

  // Sort the extracted numbers
  sort(numbers, numbers + count);

  // Print the result
  for (int i = 0; i < count; i++) {
    cout << numbers[i];
    if (i != count - 1) {
      cout << "+";
    }
  }
  cout << endl;

  return 0;
}
