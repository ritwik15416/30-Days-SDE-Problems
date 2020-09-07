// Without recursion (returns a vector containing Inorder traversal of a tree)
/*
  struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

*/
vector<int> inOrder(Node* root)
{
  vector<int> v;
  stack<Node*> st;
  while((root!=NULL)||(st.empty()==false)){
      while(root!=NULL){
          st.push(root);
          root = root->left;
      }
      root = st.top();
      st.pop();
      v.push_back(root->data);
      root = root->right;
  }
  return v;
  
}


// With recursion inorder (returns a vector containing Inorder traversal of a tree)
