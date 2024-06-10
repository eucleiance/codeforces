#include <iostream>
#include <cmath>
using namespace std;

int main() {
  int n, m, a, b;
  cin >> n >> m >> a >> b;

  // If it's cheaper to buy a ticket individually
  if (b/m >= a) {
    cout << n*a << endl;
  }
  else {
    // Calculate the cost of buying tickets in packages and individually
    int cost1 = (n/m)*b + (n%m)*a;
    int cost2 = ceil((double)n/m)*b;
    cout << min(cost1, cost2) << endl;
  }

  return 0;
}

// 6 2 1 2
// 6

// 6 -> n -> Subway Rides total
// 2 -> m -> Number of rides of special ticket 
// 1 -> a -> cost of one ticket 
// 2 -> b -> special ticket cost 


// 5 2 2 3
// 8

// 5 * 2 = 10
// 3 + 3 + 2

// 5 -> Subway Rides total
// 2 -> Number of rides of special ticket 
// 2 -> cost of one ticket 
// 3 -> special ticket cost 

// n, m, a, b
// a -> cost of one ticket per ride 
// special ticket for m rides
// b -> special ticket cost
// b / m -> special ticket cost per ride;
// n -> total subway travels
