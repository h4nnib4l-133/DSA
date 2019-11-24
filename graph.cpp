#include<vector>
#include<iostream>

using namespace std ;

int main(){
	int e,n,t;
	cin >> t;
	while(t--){
		cin >> n >> e;
		int arr[2*e];
		for(int i=0; i<2*e; i++){
			cin >> arr[i];
		}
		cout << e << endl;
	}
	return 0;
}
