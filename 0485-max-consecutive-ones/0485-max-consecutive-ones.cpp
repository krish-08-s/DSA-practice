class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int l = 0 , r = nums.size()-1;
        int max = 0 , count = 0;
        while(l <= r){
            if( nums[l] == 1)
            {
                count++;
                l++;
            }
            else if( nums[l] == 0)
            {
                count = 0;
                l++;
            }
            if ( max < count) max = count;
        }
        return max;
    }
};