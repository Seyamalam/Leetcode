class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int len = arr.size();
        int biggest;
        for(int i =0; i < len-1; i++)
        {
            biggest = INT_MIN; 
            for (int j= i+1; j < len; j++)
            {
                if(biggest < arr[j])
                    biggest = arr[j];
            }
            arr[i] = biggest;
        }
        
        arr[len-1] = -1;
        return arr; 
    }
};