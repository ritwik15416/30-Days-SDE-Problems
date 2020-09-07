// With recursion (returns a vector containing postorder traversal of a tree)
/*
  struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};
*/

void help(Node* root,vector<int> &v){
    if(root!=NULL){
        help(root->left,v);
        help(root->right,v);
        v.push_back(root->data)
    }
}
vector <int> postorder(Node* root)
{
    vector<int> v;
    help(root,v);
    return v;
}
