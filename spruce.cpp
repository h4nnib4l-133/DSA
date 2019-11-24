#include<bits/stdc++.h>
#define MAX 1000

using namespace std;
int main(){

int t;
cin >> t;
int arr[MAX];
for (int i=0; i<MAX; i++){
	arr[i] = 0;
}
int num;
int count = 1;
int temp = 1;
bool ans = true;

for(int i=0; i<t-1; i++){
	cin >> num;
	count = count + 1;
	if (num > count){
		ans = false;
	}
	if (temp != num ){
		if (num < temp || (num > temp && num <= (count - arr[temp]))){
				cout << count <<endl;
				arr[num] ++;
				temp = num;
		}
		else{
			arr[temp]--;
			arr[num]++;
			temp = num;
		}
	}
	else{
		arr[num]++;
	}
}

for(int i=1; i<=t; i++){

	if (arr[i] < 3 && arr[i] != 0){
		ans = false;
		break;
	}
}

if (ans == true){
	cout << "Yes" << endl;
}
else {
	cout << "No" << endl;
}

return 0;
}
