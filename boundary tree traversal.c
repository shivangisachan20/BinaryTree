
class Solution {
public:
    void lefttree(Node *root,vector<int>&ans){
        if(root==NULL)
        return;
        if(root->left!=NULL){
            ans.push_back(root->data);
            lefttree(root->left,ans);
        }
        else if(root->right!=NULL){
            ans.push_back(root->data);
            lefttree(root->right,ans);
        }
    }
    void leaf(Node *root,vector<int>&ans){
        if(root==NULL)return;
        leaf(root->left,ans);
        if(root->left==NULL && root->right==NULL)
        ans.push_back(root->data);
        leaf(root->right,ans);
    }
    void righttree(Node *root,vector<int>&ans){
        if(root==NULL)return;
        if(root->right!=NULL){
            righttree(root->right,ans);
            ans.push_back(root->data);
        }
        else if(root->left!=NULL){
            righttree(root->left,ans);
            ans.push_back(root->data);
        }
    }
    vector <int> printBoundary(Node *root)
    {
        vector<int>ans;
        ans.push_back(root->data);
        lefttree(root->left,ans);
        leaf(root,ans);
        righttree(root->right,ans);
        return ans;

    }
};

// { Driver Code Starts.

/* Driver program to test size function*/

int main() {
    int t;
    string tc;
    getline(cin, tc);
    t=stoi(tc);
    while(t--)
    {
        string s ,ch;
        getline(cin, s);
        Node* root = buildTree(s);
        Solution ob;
        vector <int> res = ob.printBoundary(root);
        for (int i : res) cout << i << " ";
        cout << endl;
    }
    return 0;
}  // }
