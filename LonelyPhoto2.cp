#include <iostream>
#include<string>
#include <algorithm>

using namespace std;

int main() {
  
  long long n;
  string letters;
  long long a;
  long long b;
  long long ans = 0;

  cin >> n;
  cin >> letters;

  long long* numArray;

  numArray = new long long [n];

  for (long long i = 0; i < n; ++i) {

    if (letters.at(i) == 'H') {
      numArray[i] = 0;
    }
    else {
      numArray[i] = 1;
    }

  }

  for (long long i = 0; i < n; i++) {

    if (numArray[i] == 1) {
      
      long long a;
      long long b;
      for (a = 0; i-a-1 >= 0; ++a) {
         if (numArray[i-a-1] == 1) break;
      }
      for (b = 0; i + b + 1 <= n - 1; ++b) {
        if (numArray[i +b + 1] == 1) break;
      }

      ans += (a + 1) * (b + 1) - 1 - min ((int)a, 1) - min ((int)b, 1);
    }


  }

  for (long long i = 0; i < n; i++) {

    numArray[i] = 1 - numArray[i];

  }

  for (long long i = 0; i < n; i++) {

    if (numArray[i] == 1) {
      
      long long a;
      long long b;
      for (a = 0; i-a-1 >= 0; ++a) {
          if (numArray[i-a-1] == 1) break;
      }
      for (b = 0; i + b + 1 <= n - 1; ++b) {
        if (numArray[i +b + 1] == 1) break;
      }

      ans += (a + 1) * (b + 1) - 1 - min ((int)a, 1) - min ((int)b, 1);
    }


  
  }
  
  cout << ans << endl;

} 