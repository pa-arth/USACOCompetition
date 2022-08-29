#include <iostream>
#include <string>
#include <algorithm>
#include <sstream>

using namespace std;
using ll = long long;

int main() {
  
  ll n;

  ll A[100000];
  ll B[100000];
  ll ans = 0;
  ll count;
  int j = 0;
  int OG = 0;
  ll rand[100000];
  int leavingOffPoint = 0;

  cin >> n;

    for (int j = 0; j < n; ++j) {

        cin >> A[j];

    }
    
    for (int j = 0; j < n; ++j) {

        cin >> B[j];

    }

    bool mismatched = false;
    for (int i = 0; i < n; ++i) {

      if (A[i] != B[i]) {
        if (!mismatched) {
        mismatched = true;
        rand[i] = 1;
      }

      }
      else {
        rand[i] = 0;
        mismatched = false;
      }


    }


    for (int i = 0; i < n; ++i) {
      if (rand[i] == 1) {
        ++B[i];
        ++i;
        while (rand[i] != 1) {
          
          if (A[i] > B[i])
          ++B[i];
          else if (A[i] < B[i])
          --B[i];

        }
        ++ans;
      }

    }

  cout << ans << endl;

    return 0;
}

//     for (int i = 0; i < rand; ++i) {
//     for (int i = 0; i < n; ++i) {
//       if (A[i] == B[i])
//         ++j;
//       else {
//         break;
//       }
//     }
//     OG = j;

//     while ((A[j] != B[j])) {

//         ++count;
//         ++j;

//     }
//     leavingOffPoint = j;

//     for (int i = OG; i < OG + count; ++i) {

//       if (A[OG]>B[OG]) {
//         ++B[i];
//       }
//       else if (A[OG]<B[OG]) {
//         --B[i];
//       }
//     }

//     }

//   return 0;
// }