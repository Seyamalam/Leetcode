class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int>solution;
        int counter, current_number; 
        for(int i=0; i< nums.size(); i++)
        {
            counter = 0;  
            current_number = nums[i];
            for(int a = 0; a < nums.size(); a++)
            {
                if(a == i)
                    continue; 
                if(nums[a] < current_number)
                    counter++;
            }
            solution.push_back(counter);     
        }
        return solution; 
    }
};