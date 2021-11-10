class Solution
{
    public:
    //Function to return a list of nodes visible from the top view
    //from left to right in Binary Tree.
    vector<int> topView(Node *root)
    {
        map<int,int>m;
        vector<int>ans;
        queue<pair<Node*,int>>q;
        if(root==NULL)
        return ans;
        q.push({root,0});
        while(!q.empty()){
            Node* t=q.front().first;
            int h=q.front().second;
            q.pop();
            if(m[h]==0)
            m[h]=t->data;
            if(t->left!=NULL)
            q.push({t->left,h-1});
            if(t->right!=NULL)
            q.push({t->right,h+1});

        }
        for(auto x:m)
        {
            ans.push_back(x.second);

        }
        return ans;

            }

};
