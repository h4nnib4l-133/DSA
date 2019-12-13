#include <bits/stdc++.h>

using namespace std;

void minindex(string str, string patt){
    vector<int> h(27, 0);
    for(int i=0; i<str.length(); i++){
        if(h[str[i] - 96] == 0){
            h[str[i] - 96] = i+1;   
        }
    }
    int index = 100001;
    int flag = 0;
    int j = 0;
    for(int i=0; i<patt.length(); i++){
        if(h[patt[i] - 96] != 0){
           j =  h[patt[i] - 96];  
        }
        index = min(index, j);
        flag = 1;
    }
    
    if(flag == 1){
        cout << patt[index - 1] << ;
    }
    else{
        cout << "$" << " ";
    }
}

int main() {
	int t;
	cin >> t;
	while(t--){
	    string str;
	    string patt;
	    cin >> str;
	    cin >> patt;
	    minindex(str, patt);
	} 
	return 0;
}



