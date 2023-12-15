class Solution {
public:
    int repeatedNTimes(vector<int>& A) {
        unordered_map<int, int>mp;
        int len = A.size();
        int frequency = len /2;
        
        for(int i =0; i < len; i++)
            mp[A[i]]++;
        
        for(auto x: mp)
        {
            if(x.second == frequency)
                return x.first; 
        }
        return -1; 
    }
};