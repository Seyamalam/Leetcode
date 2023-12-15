class Solution {
public:
    void sortColors(vector<int>& nums) {
        int length = nums.size();
        int zero = 0;
        int one = 0;
        int two = 0;
        for(int i =0; i< length; i++){
            if(0 == nums[i])
                zero++;
            else if(1 == nums[i])
                one++;
            else if(2 == nums[i])
                two++;
        }

        int index = 0;
        while(zero > 0){
            nums[index] = 0;
            index++;
            zero--;
        }
        while(one > 0){
            nums[index] = 1;
            index++;
            one--;
        }
        while(two > 0){
            nums[index] = 2;
            index++;
            two--;
        }
    }
};