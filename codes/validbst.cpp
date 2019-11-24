#include<bits/stdc++.h>

using namespace std;

struct Node{
  int data;
  struct Node *left;
  struct Node *right;
};


class bst{
  Node *root;
  public:
  // return tree when ever class is called
  bst(){
      root = NULL;
  }

  // check if tree is empty
  bool isempty() {
    if(root == NULL){return true;}
    else {return false;}
  }

  //insert node bst node
  void insertbstnode(int item){
    Node *p = new Node;
    Node *addonptr;
    addonptr = NULL;
    p -> data = item;
    p -> left = NULL;
    p -> right = NULL;
    if (isempty()){
      cout << "root was empty m8 koi na bhaar deta hu!!" << endl;
      root = p;
    }
    else{
      Node *carryonptr;
      carryonptr = root;
      while(carryonptr != NULL){
        addonptr = carryonptr;
        if (item > carryonptr->data){
          carryonptr = carryonptr->right;
        }
        else{
          carryonptr = carryonptr->left;
        }
      }
        if (addonptr->data > item){
          addonptr->left = p;
          cout << "on the left" << endl;
        }
        else {
          addonptr->right = p;
          cout << "on the right" << endl;
        }
    }
  }

  void preordert(){
      preorder(root);
  }

  void preorder(Node *ptr){
    if(ptr == NULL){return;}
    cout << ptr->data <<endl;
    preorder(ptr->left);
    preorder(ptr->right);
  }

};


int main(){
  bst btree;
  btree.insertbstnode(10);
  btree.insertbstnode(9);
  btree.insertbstnode(40);
  btree.insertbstnode(50);
  btree.insertbstnode(20);
  btree.preordert();
  return 0;
}
