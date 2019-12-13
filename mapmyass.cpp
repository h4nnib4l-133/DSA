#include <iostream>
#include <iterator>
#include <map>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    int arr1[n], arr2[n];
	    for(int i =0; i< n; i++){
	        cin >> arr1[i]; 
	    }
			for(int i =0; i< n; i++){
	        cin >> arr2[i]; 
	    }
	    map<int, int> m;
	    for(int i=0; i<n; i++){
	    	m[arr1[i]] = 1;
	    }
	    for(int i=0; i<n; i++){
				if(m[arr2[i] == 1]){
					m[arr2[i]] = 2;
				}	
			}
			for(auto x: m){
				if(x.second != 2){
						cout << 0 << endl;
						return 0;
				}
			}
			cout << 1 << endl;
	}
	return 0;
}
