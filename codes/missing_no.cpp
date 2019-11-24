#include <iostream>
using namespace std;

int main(){
  int num, num_arr, net_sum;
  int temp;
  int sum = 0;
  cin >> num;
  printf("\n");
  for (int i=0; i<num; i++){
    cin >> num_arr;
    net_sum = num_arr*(num_arr+1)/2;
    for (int j=0; j<num_arr-1; j++){
      cin >> temp;
      sum = sum + temp;
    }
    // printf("%d\n", sum);
    cout << net_sum - sum << endl;
    sum = 0;
  }
return 0;
}
