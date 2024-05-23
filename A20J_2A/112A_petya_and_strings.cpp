#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int compare_strings(string s1, string s2) {
    transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
    transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
    return s1.compare(s2);
}

int main() {
    string s1, s2;
    cin >> s1 >> s2;

    int result = compare_strings(s1, s2);
    if (result < 0) {
        cout << "-1" << endl;
    } else if (result > 0) {
        cout << "1" << endl;
    } else {
        cout << "0" << endl;
    }
    return 0;
}




// #include <iostream>
// #include <string>
//
// using namespace std;
//
// int main()
// {
//   string s1, s2;
//   cin >> s1;
//   cin >> s2;
//   char l1, l2;
//   int out;
//   for (int i = 0; i <s1.length(); i++)
//   {
//     l1 = tolower(s1[i]);
//     l2 = tolower(s2[i]);
//     if (int(l1) < int(l2))
//     {
//       out = 0;
//       break;
//     } else if (int(l1) > int(l2))
//     {
//       out = 1;
//       break;
//     } else 
//     {
//       out = 0;
//     }
//   }
//   cout << out << endl;
// }
