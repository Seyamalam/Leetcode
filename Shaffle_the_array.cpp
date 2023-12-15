class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        if(n <= 1)
                return nums;
        vector<int> solution;
    
        for(int i=0;i < n; i++)
        {
             solution.push_back(nums[i]);
             solution.push_back(nums[i+n]);
        }
        return solution;
    }
};