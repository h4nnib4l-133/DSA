#include<iostream>

using namespace std;

int arr[100][100];

void initialize()
{
    for(int i = 0;i < 10;++i)
        for(int j = 0;j < 10;++j)
            arr[i][j] = {0};
}

int main(){
  int N, M, A, B, Q, x, y;
  cin >> N;
  cin >> M;
  initialize();
  for(int i=0; i<M; i++){
    cin >> A >> B;
    arr[A][B] = 1;
    arr[B][A] = 1;//since undirected graph
  }
  cin >> Q;
  for(int i=0; i<Q; ++i){
    cin >> x >> y;
    if(arr[x][y] == 1){
      printf("YES");
    }
    else {
      printf("NO");
    }
  }
  return 0;
}
