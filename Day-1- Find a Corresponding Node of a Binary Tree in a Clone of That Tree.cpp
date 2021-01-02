/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* returnNode=NULL;
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        Traverse(original,cloned,target);
        return returnNode;
        
    }
    
    void Traverse(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        if(original==NULL)
            return;
        if(original==target){
            returnNode=cloned;
            return;
        }
        Traverse(original->left,cloned->left,target);
        Traverse(original->right,cloned->right,target);
        
            
    }
};
