class Solution {
public:
    void moveZeroes(vector<int>& nums) {
       int len = nums.size(); 
        int zeros = 0; 
        for(int i =0; i < len ;i++)
        {
            if(nums[i] == 0)
                zeros++; 
        }
        if(zeros == 0 ||  zeros == len )
            return; 
        int j=0; 
        for(int i = 0; i< len; i++)
        {
            if(nums[i] != 0)
            {
                nums[j] = nums[i]; 
                j++; 
            }
        }
        for(int i = len-zeros; i < len; i++)
            nums[i] = 0; 
    }
};