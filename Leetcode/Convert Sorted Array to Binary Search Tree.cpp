class Solution {
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return sortedArrayToBSTfunc(nums, 0, nums.size() - 1);
    }

private:
    TreeNode* sortedArrayToBSTfunc(const vector<int>& nums, int start, int end)
    {
        if (start > end) {
            return nullptr;
        }

        int mid = start + (end- start)/2;
        TreeNode* root = new TreeNode(nums[mid]);
        root->left = sortedArrayToBSTfunc(nums, start, mid - 1);
        root->right = sortedArrayToBSTfunc(nums, mid + 1, end);
        return root;

    }

};