#include <iostream>
#include <string>

using namespace std;

int main()
{
  string inp;
  cin >> inp;
  string result;
  for (int i = 0; i < inp.length(); i++){
    char ch = tolower(inp[i]);
	    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='y'){
	       continue; 
	    }else{
	       cout<<"."<<ch;
	    }
  }
  cout << endl;
  return 0;
}
