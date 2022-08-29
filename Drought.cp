#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  
  int n; cin >> n;
  int numCows;
  

  for (int i = 0; i < n; ++i) {
    cin >> numCows;
    int cows[numCows];

    cin >> cows[i];

    if (numCows == 2) {
      if (cows[0] != cows[1]) cout << -1;
    }
    else if (numCows == 1) cout << -1;

    else if (numCows ==3) {
      if (cows[0]==cows[1] || cows[1]==cows[2]) cout << -1;
    }
    else {
      max_element(cows,cows+numCows);
    }
  }

}