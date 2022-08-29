#include <iostream>
#include <string>
#include <algorithm>
#include <sstream>
#include <thread>

using namespace std;
using ll = long long;


int main() {
  
  int numCharacters;
  string input;
  string temp;
  int numH = 0;
  int numG = 0;
  int count = 0;
  int j = 0;
  bool working = true;

  cin >> numCharacters;
  cin >> input;

 for (int z = 0; z  < numCharacters - 2; ++z) {
  

//   while (working) {
//     if (working) {
//     temp += input.at(z+j);
//     }
//     else {
//       working = false;
//     }
//     ++j;
//     for (int a = 0; a < temp.length(); ++a) {
//         if (temp[a] == 'H')
//           ++numH;
//         else
//           ++numG;
//     }
//     if (numG == 1)
//       ++count;
//     else if (numH == 1)
//       ++count;
//     temp = "";
//     numG = 0;
//     numH = 0;
//   //}
//   temp = "";
//   }
  for (int i = 0; i < numCharacters - 2 - z; ++i) {

    for (int j = 0; j < 3 + i; ++j) {

       temp += input[z + j];

   }
    for (int a = 0; a < temp.length(); ++a) {
        if (temp[a] == 'H')
          ++numH;
        else
          ++numG;
    }
    if (numG == 1)
      ++count;
    else if (numH == 1)
      ++count;
    temp = "";
    numG = 0;
    numH = 0;
  }
  temp = "";
}
cout << count << endl;
  return 0;
} 
