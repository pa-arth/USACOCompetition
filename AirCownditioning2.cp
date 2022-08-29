#include <iostream>
#include <string>

using namespace std;

int main() {
  int n;
  cin >> n;

  int* desired;
  int* given;
  int* diff;
  int* diff2;

  int ans = 0;

  desired = new int [n];
  given = new int [n];
  diff = new int [n];
  diff2 = new int [n+1];

  for (int i = 0; i < n; ++i) {
    cin >> desired[i];
  }
  for (int i = 0; i < n; ++i) {
    cin >> given[i];
  }

  for (int i = 0; i < n; ++i) {
    diff[i] = desired[i] - given[i];
  }
  for (int i = 1; i < n; ++i) {
    diff2[i] = diff[i] - diff[i-1];
  }
  diff2[0] = diff[0];
  diff2[n] = 0 - diff[n-1];

  for (int i = 0; i < (n + 1); ++i) {
    if (diff2[i] > 0) {
      ans += diff2[i];
    }
  }

  cout << ans << endl;

} 