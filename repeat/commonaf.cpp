#include <iostream>
#include <unordered_map>

using namespace std;
void printc(long arr1[], long arr2[], long arr3[], int n, int m, int k){
    unordered_map<long, int> mp;
    for(int i=0; i<n; i++){
        mp[arr1[i]]++;
    }
    for(int i=0; i<m; i++){
        mp[arr2[i]]++;
    }
    for(int i=0; i<k; i++){
        mp[arr3[i]]++;
    }
    int flag = 0;
    for(auto i : mp){
        if(i.second > 2){
            cout << i.first << " ";
            
        }
    }
    if(flag == 0){
        cout << -1 << endl;
    }
}
int main() {
	int t;
	cin >> t;
	while(t--){
	    int n,m,k;
	    cin >> n >> m >> k;
	    long arr1[n], arr2[m], arr3[k];
	    for(int i=0; i<n; i++){
	           cin >> arr1[i]; 
	    }
	    for(int i=0; i<m; i++){
	            cin >> arr2[i];
	    }
	    for(int i=0; i<k; i++){
	            cin >> arr3[i];
	    }
	    printc(arr1, arr2, arr3, n, m, k);
	}
	return 0;
}
