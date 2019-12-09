#include <iostream>
#include <stack>
using namespace std;

long long* printnextmax(long long a[], int n, long long ans[]){
    stack<long long> s;
    for(int i=n-1; i>=0; i--){
        while(!s.empty() && a[i] >= s.top()){
            s.pop();
        }
        ans[i] = s.empty() ? -1 : s.top();
        s.push(a[i]);
    }
    return ans;
}

int main() {
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    long long arr[n];
	    for(int i=0; i<n; i++){
	        cin >> arr[i];
	    }
	    long long ans[n];
	    long long* ptr = printnextmax(arr, n, ans);
	    for(int i = 0; i<n; i++){
	        cout << ptr[i] << " "; 
	    }
	    cout << endl;
	}
	return 0;
}
