#include<bits/stdc++.h>

using namespace std;

int main(){
  int r, c;
  cin >> r >> c;
  int arr[r][c];
  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      cin >> arr[i][j];
    }
  }
  int arrt[c][r];
  for (int i = 0; i < c; i++) {
    for (int j = 0; j < r; j++) {
      arrt[i][j] = arr[j][i];
    }
  }
  for (int i = 0; i < c; i++) {
    for (int j = 0; j < r; j++) {
      cout << arrt[i][j] << endl;
    }
  }
  return 0;
}
