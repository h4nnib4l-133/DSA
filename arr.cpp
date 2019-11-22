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

void get_permutations(int depth, int k, vector<int> &A, vector<int> &arr, vector<bool> &check,  vector<vector<int>> &ans){
	if (depth == k){
		ans.push_back(arr);
		return;
	}
	for(int i=0; i<A.size(); i++){
		//if(!check[i]){
			//check[i] = true;
			arr.push_back(A[i]);
			//cout << "reached here" << " ";
			//printarr(arr);
			//cout << "|" ;
			//printarrb(check);
			//cout << endl;
	       		get_permutations(depth +1, k, A, arr, check, ans);
			arr.pop_back();
			//cout << "going back to" << " "; 
			//printarr(arr);
			//cout << "|" ;
			//check[i] = false;
			//printarrb(check);
			//cout << endl;
	//	}	
			
	}
}



int main(){
vector<int> A(3, 0);
for(int  i=0; i<3; ++i){
	A[i] = i + 1;

}

int depth = 0;
int k = A.size();
vector<int> arr;
vector<bool> check(A.size(), false);
vector<vector<int> > ans;
get_permutations(depth, k-1, A, arr, check, ans);

for(int i=0; i<ans.size(); i++){
	printarr(ans[i]);

}


return 0;

}
