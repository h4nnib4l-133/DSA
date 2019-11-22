#include<stdio.h>
#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t > 0){
		int n;
		cin >> n;
		int start[n];
		int end[n];
		for(int i=0; i<n; i++){
			cin >> start[i];
		}
		for(int i=0; i<n; i++){
			cin >> end[i];
		}
		sort(end, end+n);
		for(int i=0; i<n; ++i){
			if(end[i] <  start[i + 1]){
				cout << i+1 << endl;
			}
			else{
				cout << i+1 << endl;
				i++;
			}			
		}
		t--;
	}
	return 0;
}
