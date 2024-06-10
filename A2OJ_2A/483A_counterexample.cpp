#include <iostream>

using namespace std;

int main() {
  long long lower_limit, upper_limit;
  cin >> lower_limit >> upper_limit;

  long long first_number, second_number, third_number, counter = 0, result = -1;

  // Check if lower_limit is odd, if so, increment it to make it even
  if (lower_limit % 2 != 0) lower_limit++;

  // Check if the absolute difference between upper_limit and lower_limit is at least 2
  if (abs(lower_limit - upper_limit) >= 2) {
    // If yes, print three consecutive numbers starting from lower_limit
    cout << lower_limit << " " << lower_limit + 1 << " " << lower_limit + 2 << endl;
  } else {
    // If not, print -1
    cout << result << endl;
  }

  return 0;
}

