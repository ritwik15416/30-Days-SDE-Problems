// With recursion preorder traversal (returns a vector containing Pre-order traversal of a tree)
/*struct Node
{
    int data;
    Node* left;
    Node* right;
};*/

void help(Node* root,vector<int> &v){
    if(root!=NULL){
        v.push_back(root->data);
        help(root->left,v);
        help(root->right,v);
    }
}
vector <int> preorder(Node* root)
{
    vector<int> v;
    help(root,v);
    return v;
}
