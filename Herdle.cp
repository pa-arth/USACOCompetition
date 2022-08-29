#include <iostream>
using namespace std;

int main() {
  char guess[3][3];
  char ans[3][3];
  int real[3][3];

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; ++j) {
      real[i][j] = 0;
      cin >>ans[i][j];
    }
  }
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; ++j) {
      cin >>guess[i][j];
    }
  }

  int numGreen = 0;
  int numYellow = 0;

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; ++j) {
      if (guess[i][j]==ans[i][j]) {
        
        real[i][j] = 2;
      }
    }
  }

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; ++j) {
      for (int z = 0; z < 3; ++z) {
        for (int k = 0; k < 3; ++k) {
        if (ans [z][k] == guess[i][j]&& real[i][j] != 2) real[i][j] = 1;
        }
      }
    }
  }
//  if(guess[i][j]==ans[i][z]&&guess[i][j]!=ans[i][j]) {
//           ++numYellow;

  
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; ++j) {
      if (real[i][j]==2) {
        ++numGreen;
        if (i == 0) {
          if (real[1][j]==1&&guess[1][j] ==guess[i][j]) --numYellow;
          if (real[2][j]==1&&guess[2][j] ==guess[i][j]) --numYellow;
        }
        else if (i == 1) {
          if (real[0][j]==1&&guess[0][j] ==guess[i][j]) --numYellow;
          if (real[2][j]==1&&guess[2][j] ==guess[i][j]) --numYellow;
        }
        else {
          if (real[0][j] ==1&&guess[0][j]==guess[i][j]) --numYellow;
          if (real[1][j] ==1&&guess[1][j] ==guess[i][j]) --numYellow;
        }
      }
      else if (real[i][j]==1) ++numYellow;
    }
  }

  
  cout << numGreen << endl;
  cout << numYellow << endl;
}