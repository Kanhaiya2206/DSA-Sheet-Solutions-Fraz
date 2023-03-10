#include<bits/stdc++.h>
using namespace std;


 struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        queue<TreeNode*> q;
        if(root==NULL) return ans;
        int cnt=0;
        vector<int> v;

        q.push(root);
        while(!q.empty())
        {
            cnt=q.size();
            v.clear();
            for(int i=0;i<cnt;i++)
            {

            TreeNode* temp = q.front();
            q.pop();
            v.push_back(temp->val);
            if(temp->left!=NULL)
            q.push(temp->left);
            if(temp->right!=NULL)
            q.push(temp->right);
            }
            ans.push_back(v);

        }
        return ans;

    }
};