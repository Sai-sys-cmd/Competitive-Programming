#include <iostream>
using namespace std;

int main() {

  int n = 0, count = 0;
  cin >> n;
  
  for (int i = 0; i <= (n/5); ++i) {
    int remaining = n-5*i;
    if (remaining % 4 == 0) count++;
  }
  
  cout << count << endl;
  
  return 0;
}
