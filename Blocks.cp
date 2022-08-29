#include <iostream>
#include <vector>
using namespace std;

void solveFour (string dice1, string dice2, string dice3, string dice4, bool spellable[10],string spellWords[10], int n) {
  string test;
  for (int i = 0; i < 6; ++i) {
        for (int j = 0; j < 6; ++j) {
          for (int h = 0; h < 6; ++h) {
            for (int k = 0; k < 6; ++k) {
             test = dice1[i]+dice2[j]+dice3[h]+dice4[k];
              for (int x = 0; x < n; ++x) {
                if (test == spellWords[x]) {
                  spellable[x] = true;
                }
              }
            }
          }
        }
      }
}

void solveThree (string dice1, string dice2, string dice3, bool spellable[10], string spellWords[10], int n) {
  string test;
        for (int j = 0; j < 6; ++j) {
          for (int h = 0; h < 6; ++h) {
            for (int k = 0; k < 6; ++k) {
             test = dice1[j]+dice2[h]+dice3[k];
              for (int x = 0; x < n; ++x) {
                if (test == spellWords[x]) {
                  spellable[x] = true;
                }
              }
            }
          }
        }
}

int main() {
  int n; cin >> n;
  string dice1;
  string dice2;
  string dice3;
  string dice4;
  string test;
  
  bool spellable[10];

  string spellWords[10];

  int wordLength[10];

  cin >> dice1 >> dice2 >> dice3 >> dice4;

  for (int i = 0; i < n; ++i) {
    cin >> spellWords[i];
    wordLength[i] = spellWords[i].length();
  }

  for (int p = 0; p < n; ++p) {
    if (wordLength[p]==4) {
      solveFour (dice1,dice2,dice3,dice4, spellable, spellWords,n);
      }
    else if (wordLength[p]==3) {
        solveThree (dice1, dice2, dice3,spellable, spellWords,n);
        solveThree (dice1, dice3, dice4,spellable, spellWords,n);
        solveThree (dice2, dice3, dice4,spellable, spellWords,n);
        solveThree (dice1, dice2, dice4,spellable, spellWords,n);
    }
  }

  for(int i = 0; i < n; ++i) {
    if (spellable[i]) cout << "YES" << endl;
    else cout << "NO" << endl;
  }
}