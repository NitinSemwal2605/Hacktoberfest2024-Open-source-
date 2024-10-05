class Solution {
public:
    void subsequence(const vector<int>& arr, int index, vector<vector<int>>& ans, vector<int> temp) {
        ans.push_back(temp); // Include the current subset in the answer
        
        for (int i = index; i < arr.size(); i++) {
            if (i > index && arr[i] == arr[i-1]) {
                continue; // Skip duplicates to avoid duplicate subsets
            }
            
            temp.push_back(arr[i]); // Include the current element in the subset
            subsequence(arr, i + 1, ans, temp); // Recursively generate subsets starting from the next index
            temp.pop_back(); // Backtrack by removing the current element from the subset
        }
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end()); // Sort the array to handle duplicates
        vector<vector<int>> ans;
        vector<int> temp;
        subsequence(nums, 0, ans, temp);
        return ans;
    }
};
