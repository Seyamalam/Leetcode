class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int SIZE = mat.size(); 
        int sum_main = 0, sum_second = 0;
        for(int i =0;  i< SIZE; i++)
            sum_main += mat[i][i];

        for (int i = 0; i < SIZE; i++){
            if(i == SIZE-1-i)
                continue; 
            else
                sum_second += mat[i][SIZE-i-1];
        }
        return sum_main + sum_second; 
    }
};