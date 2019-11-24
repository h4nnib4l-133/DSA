#include<bits/stdc++.h>
using namespace std;


int main(){
int A = 2;

vector<vector<int> > arr ( A*A , vector<int>(A, 0));
for (int i=0; i<A; i++){
    for (int j=0; j<A; j++){
          arr[i][j] = j+1;                     
    }
}
        
   


return 0;
}





