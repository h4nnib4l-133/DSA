#include<iostream>

using namespace std;

void merge(int arr[], int l, int m, int r){
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;
    int L[n1];
    int R[n2];
    for (i=0; i<n1; i++){
      L[i] = arr[l + i];
    }
    for (j=0; j<n2; j++){
      R[j] = arr[m + 1 + j];
    }

    i=0;
    j=0;
    k=l;

    while(i<n1 && j<n2){
      if (L[i] <= R[j]){
          arr[k] = L[i];
          i++;
      }
      else{
          arr[k] = R[j];
          j++;
      }
      k++;
    }

    while(i < n1){
      arr[k] = L[i];
      i++;
      k++;
    }

    while(j < n2){
      arr[k] = R[j];
      j++;
      k++;
    }
}

void mergesort(int arr[], int l, int r){
  if (l < r){
    int m;
    m = (l + r)/2;
    mergesort(arr, l, m);
    mergesort(arr, m+1, r);
    merge(arr, l, m, r);
  }
}

void print(int arr[], int size){
  for (int i=0; i < size; i++){
    printf("%d ", arr[i]);
  }

}

int main(){
    int arr[] = {1, 3, 34, 23, 67, 8};
    int arr_size = sizeof(arr) / sizeof(arr[0]);
    cout << arr_size << endl;
    mergesort(arr, 0, arr_size-1);
    print(arr, 6);
    return 0;
}
