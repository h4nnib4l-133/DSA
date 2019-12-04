#include <iostream>
#include <deque>
using namespace std;

void printmax(int arr[], int n, int k){
    deque<int> qt;
    for(int i = 0; i<k; i++){
        while(!qt.empty() && arr[i] >= arr[qt.back()]){
            qt.pop_back();
        }
        qt.push_back(i);
    }
    cout << arr[qt.front()] << " ";
    for(int i=k; i<n; i++){
        while(!qt.empty() && qt.front() <= i-k){
            qt.pop_front();
        }
        while(!qt.empty() && arr[i] >= arr[qt.back()]){
            qt.pop_back();
        }
        qt.push_back(i);
        cout << arr[qt.front()] << " ";
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;
	while(t--){
	    int n, k;
	    cin >> n >> k;
	    int arr[n];
	    for(int i=0; i<n; i++){
	        cin >> arr[i]; 
	    }
	    printmax(arr,n,k);
	}
	return 0;
}
