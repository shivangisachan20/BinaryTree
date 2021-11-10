class Solution {

    public:

    int diameter(Node* root) {
        int d=0;
        height(root,d);
        return d;

    }
    private:

    // Function to return the diameter of a Binary Tree.
    int height(Node*root,int& d){
        if(root==NULL)
        return 0;
        int lh=height(root->left,d);
         int rh=height(root->right,d);
         d=max(d,lh+rh+1);
         return 1+max(lh,rh);
    }

};
