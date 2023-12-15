class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        int len = A.size();
        int i;
        vector<int>solution; 
        for(i=0; i < len; i++)
        {
            if(A[i] %2 ==0)
                solution.push_back(A[i]);
        }
        for(i=0; i < len; i++)
        {
            if(A[i] % 2 !=0)
                solution.push_back(A[i]);
        }
        return solution;

    }
};