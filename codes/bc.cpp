#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int bc(int n, int k){
  int c[n+1][k+1];
  for(int i=0; i<=n; i++){
    for(int j=0; j<=min(i,k); j++){
      if(j == 0 || j == i){
        c[i][j] = 1;
        cout << i << j << c[i][j] << endl;
      }
      else {
        c[i][j] = c[i - 1][j - 1] + c[i - 1][j];
        cout << i << j << c[i][j] << endl;
      }
    }
  }
  return c[n][k];
}

int main(){
  int n, k;
  cin >> n >> k;
  if(k > n){
    cout << "fuck you !!" << endl;
  }
  else{
      cout << bc(n,k) << endl;
  }
  return 0;
}
