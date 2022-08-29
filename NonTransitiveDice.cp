#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  
  freopen("data.in", "r", stdin);
  int n;
  cin >> n;
  int big = 0;
  int bigger = 0;

  int a[4];
  int b[4];
  int c[4];

  int numBiggerA = 0;
  int numBiggerB = 0;
  int arr[n][8];

  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < 8; ++j) {
      cin >> arr[i][j];
    }
  }

  
  for (int xyz = 0; xyz < n; ++xyz) {
    for (int i = 0; i < 4; ++i) {
      a[i] = arr[xyz][i];
    }
    for (int i = 4; i < 8; ++i) {
      b[i] = arr[xyz][i];
    }

    for (int i = 0; i < 4; ++i) {
      
        if (a[i] > b[i]) ++big;
        else if (b[i] > a[i]) ++bigger;
      
    }

    if (bigger > big) {

      for (int i = 1; i < 11; ++i) {
        for (int j = 1; j < 11; ++j) {
          for (int k = 1; k < 11; ++k) {
            for (int p = 1; p < 11; ++p) {
              c[0] = i;
              c[1] = j;
              c[2] = k;
              c[3] = p;
              for (int z = 0; z < 4; ++z) {
                for (int y = 0; y < 4; ++y) {
                  if (c[z] > a[y]) ++numBiggerA;
                  else if (b[y] > c[z]) ++numBiggerB;
                }
              }
              if (numBiggerA > numBiggerB) {
                break;
                numBiggerA = 0; numBiggerB = 0;
              }
              }
              if (numBiggerA > numBiggerB) break;
            }
            if (numBiggerA > numBiggerB) break;
          }
          if (numBiggerA > numBiggerB) break;
        }
        big = 0; bigger = 0;
      }
    
  
  else {
    for (int i = 1; i < 11; ++i) {
        for (int j = 1; j < 11; ++j) {
          for (int k = 1; k < 11; ++k) {
            for (int p = 1; p < 11; ++p) {
              c[0] = i;
              c[1] = j;
              c[2] = k;
              c[3] = p;
              for (int z = 0; z < 4; ++z) {
                for (int y = 0; y < 4; ++y) {
                  if (c[z] > a[y]) ++numBiggerA;
                  else if (a[y] > c[z]) ++numBiggerB;
                }
              }
              if (numBiggerA > numBiggerB) {
                
                break;
      
              }
              }
              if (numBiggerA > numBiggerB) break;
            }
            if (numBiggerA > numBiggerB) break;
          }
          if (numBiggerA > numBiggerB) break;
        }
        big = 0; bigger = 0;
      }
      if (numBiggerA > numBiggerB) {
        cout << "yes" << endl;
      }
      else cout << "no" << endl;
      numBiggerA = 0; numBiggerB = 0;
  }

}