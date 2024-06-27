#include <iostream>
using namespace std;

int main() {
  int n, m;
  long long count = 0;
  cin >> n >> m;
  int task[m];

  for (int i = 0; i < m; i++) {
    cin >> task[i];
  }

  int loc = 1; // starting at house 1

  for (int i = 0; i < m; i++) {
    if (task[i] >= loc) {
      count += task[i] - loc;
    } else {
      count += n - (loc - task[i]);
    }
    loc = task[i];
  }

  cout << count << endl;

  return 0;
}

      // cout << "task > loc " << "task: " << task[i] << " loc " << loc << " count " << count << endl;
      // cout << "task > loc " << "task: " << task[i] << " loc " << loc << " count " << count << endl;
      // cout << endl;
      //
      //
      //
      // cout << "task + 1 < loc " << "task: " << task[i] << " loc " << loc << " count " << count << endl;
      // cout << "task + 1 < loc " << "task: " << task[i] << " loc " << loc << " count " << count << endl;
      // cout << endl;
