#include<bits/stdc++.h>
using namespace std;
int main()
{
  long int total_length, length_a, length_b, length_c, num_a_pieces, num_b_pieces, num_c_pieces, max_total_pieces, remaining_length;
  while(cin >> total_length >> length_a >> length_b >> length_c)
  {
    max_total_pieces = 0;
    for(num_a_pieces = 0; num_a_pieces * length_a <= total_length; ++num_a_pieces)
    {
      for(num_b_pieces = 0; num_a_pieces * length_a + num_b_pieces * length_b <= total_length; ++num_b_pieces)
      {
        remaining_length = total_length - num_a_pieces * length_a - num_b_pieces * length_b;
        if(remaining_length % length_c == 0)
        {
          num_c_pieces = remaining_length / length_c;
          max_total_pieces = max(max_total_pieces, num_a_pieces + num_b_pieces + num_c_pieces);
        }
      }
    }
    cout << max_total_pieces << endl;
    return 0;
  }
}
