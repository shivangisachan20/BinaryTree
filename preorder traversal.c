void preorderutil(Node* root,vector <int> &res)
{
    if(root == NULL)
    return;
    res.push_back(root->data);
    preorderutil(root->left,res);
    preorderutil(root->right,res);

}

vector <int> preorder(Node* root)
{
  vector<int>res;
  preorderutil(root,res);
  return res;
}
