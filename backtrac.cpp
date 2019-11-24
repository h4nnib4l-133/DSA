#include <iostream> 
#include <algorithm>
#include <vector>

using namespace std;


void printarr(vector<int> arr){
for (auto x: arr){
	cout << x << " ";
}
}

void printarrb(vector<bool> arr){
for (int i=0; i<arr.size(); i++){
	cout << arr[i] << " ";
	cout << "(" << i << ")" << " ";
}
}

void get_permutations(int depth, int k, vector<int> &A, vector<int> &arr, int index,  vector<vector<int>> &ans){
	
	if (depth == k){
		ans.push_back(arr);
		return;
	}
	for(int i=index; i<A.size(); i++){
		//while(k <= A.size()){
			arr.push_back(A[i]);
			ans.push_back(arr);
			get_permutations(depth +1, k, A, arr, i+1, ans);
			arr.pop_back();
		//}
	}
}



int main(){
vector<int> A(3, 0);
for(int  i=0; i<3; ++i){
	A[i] = i + 1;

}

int depth;
int k = A.size();
vector<int> arr;
vector<bool> check(A.size(), false);
vector<vector<int> > ans;
int index = 0;
get_permutations(depth, k, A, arr, index, ans);

for(int i=0; i<ans.size(); i++){
	printarr(ans[i]);

}


return 0;

}
