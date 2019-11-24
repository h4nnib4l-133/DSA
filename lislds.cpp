#include<iostream>
#include<bits/stdc++.h>


using namespace std;

int lislds(vector<int> const &arr){
vector<int> ddp(arr.size(), 1);
vector<int> idp(arr.size(), 1);
int n = arr.size();

for(int i=0; i<n; i++){
	for(int j=0; j<i; j++){
		if (arr[j] > arr[i]){
			ddp[i] = max(ddp[i], ddp[j] + 1);
		}
		if (arr[i] > arr[j]){
			idp[i] = max(idp[i], idp[j] + 1);
		}
	}
}

int maxd = ddp[0];
int maxi = idp[0];	
for(int i=0; i<n; i++){
	if (ddp[i] > maxd){
					cout << i  << "d" << ddp[i] << " ";
					maxd = i;
	}
	if (idp[i] > maxi){
					maxi = i;
					cout << i << "i" << idp[i] << " ";
	}
}		
if (maxd > maxi){
	return maxd + 1;
}
else{
		maxi = idp[0];
		for(int j=0; j<maxd; j++){
				if (maxi <  idp[j]){
				maxi = j;
				}
		}
		if (maxi == 0){
			return 0;
		}
		else{
			return maxd;		
		}
}
}

int main (){
vector<int> arr = {1, 3 ,5 ,11, 34, 23, 5, 12, 10};
cout << lislds(arr) << " ";

return 0;

}
