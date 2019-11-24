#include<iostream>
using namespace std;

int binarysearch(int arr[], int l, int r,  int num){
  int m = l + (r - l)/2;
  if (arr[m] == num){
    return num;
  }
  else if (arr[m] > num){
    binarysearch(arr, l, m-1, num);
  }
  else{
    binarysearch(arr, m+1, r, num);
  }
}

int findpivot(int arr[], int l, int r){
  int m = l + (r - l)/2;
  if (arr[m] > arr[m-1] && arr[m] > arr[m+1]){
    return m;
  }
  else if(arr[m] < arr[m-1] && arr[m] < arr[m+1]){
    return m - 1;
  }
  else if(arr[m] > arr[m-1] && arr[m] < arr[m+1]){
    findpivot(arr, m+1, r);
  }
}


int main(){
  int N, pivot, num;
  int no;
  cin >> no;
  for(int i=0; i<no; i++){
    cin >> N;
    cout << "\n" << endl;
    int arr[N];
    for (int j =0; j < N; j++){
      cin >> arr[j];
    }
    pivot = findpivot(arr, 0, N-1);
    cin >> num;
    if (num > arr[N-1]){
      cout << binarysearch(arr, pivot, N-1, num) << endl;
    }
    else{
      cout << binarysearch(arr, 0, pivot, num) << endl;
    }
  }
  return 0;
}
