#include<iostream>
#include<bits/stdc++.h>

using namespace std; 

const int MAX = 100000;
int A[MAX];

int main(){
	cin >> A[0];
	cin >> A[1];
	int n, mod, count, temp;
	count = 1;
	sum = 0;
	cin >> n >> mod;
	for(int=2; i<n; ++i){
		A[i] = (A[i - 1] + A[i - 2])%mod;
			
		if (A[i] != A[i+1]){
			temp = count;
			count = 1;	
			continue;
		}
		else{
			count += 1;
		}
		sum += temp*temp;
	}

}

