#include<iostream>
#include<bits/stdc++.h>


using namespace std;

int lis(vector<int> const &arr){
vector<int> dp(arr.size(), 1);
int n = arr.size();

for(int i=0; i<n; i++){
	for(int j=0; j<i; j++){
		if (arr[j] > arr[i]){
			dp[i] = max(dp[i], dp[j] + 1);
		}	
	}
}
int max = dp[0];
for (int i=0; i<n; i++){
	if (dp[i] > max){
	max = dp[i];
	}
}

return max;
}



int main (){
vector<int> arr = {1, 3 ,5 ,11, 34, 23, 5, 12, 10};
cout << lis(arr) << " ";

return 0;

}
