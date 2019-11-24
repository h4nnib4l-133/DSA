#include<bits/stdc++.h>
#include<time.h>
#include<math.h>

using namespace std;
#define COUNT 10

struct Node{
  int data;
  Node *left;
  Node *right;
};

class tree{
  Node *root;
  public:
  tree(){
    root = NULL;
  }

  bool isempty(){
    if (root == NULL){return true;}
    else {return false;}
  }

  void insertnode(int data){
    Node *p = new Node;
    p->data = data;
    p->left = NULL;
    p->right = NULL;

    if(isempty()){
      root = p;
    }

    else {
      Node *ptr;
      Node *addptr;
      addptr = NULL;
      ptr = root;
      srand(time(0));
      int t = rand();
      while (ptr !=  NULL){
        addptr = ptr;
        if(data%2 == 0){
          ptr = ptr->right;
        }
        else {
          ptr = ptr->left;
        }
      }
      if(data%2 == 0){
        addptr->right = p;
      }
      else{
        addptr->left = p;
      }
    }
  }

  void preordert(){
      preorder(root);
  }

  void preorder(Node *ptr){
    if(ptr == NULL){return;}
    cout << ptr->data << abs(-1) << endl;
    preorder(ptr->left);
    preorder(ptr->right);
  }

  int heighttree(Node *A){
    int h;
    h = height(root);
    return h;
  }

  int height(Node *A){
    if(A == NULL){
      return 0;
    }
    else {
      return max(height(A->left), height(A->right)) + 1;
    }
  }
};

int main(){
  tree t;
  for (int i=0; i<=10; i++){
      t.insertnode(i*3);
      t.insertnode((i+1)*5);
  }
  t.preordert();
  //cout << t.heighttree() << endl;

return 0;
}
