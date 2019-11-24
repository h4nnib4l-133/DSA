#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int num;
        cin >> num;
        int arr[num];
        int hash[100001]={0};
        for(int i=0;i<num;i++){
            cin >> arr[i];
            hash[arr[i]]++;
        }
        int k;
        cin >> k;
        for(int i=1; i<=100000; i++){
            if(hash[i]>=1){
                k--;
            }
            if(k==0){
              cout<< i <<endl;
              break;
          }
        }

    }
	return 0;
}

// 273 452 224 433 29 81 360 16 842
