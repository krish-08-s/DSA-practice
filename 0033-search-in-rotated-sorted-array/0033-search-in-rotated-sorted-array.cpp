class Solution{
    public:
    int search(vector<int> &nums, int target){
        int n = nums.size();
        int m = 0 , l = 0 , r = n-1;
        while( l <= r)
        {
            m = (l + r) / 2;
            if( nums[m] == target)
                return m;
            
            // going to left sorted array
            if( nums[l] <= nums[m])
            {
                if( nums[l] <= target && target <= nums[m] ){
                    r = m - 1;
                }
                else
                    l = m + 1;
                }
            // going to right sorted part
            else 
            {
                if ( nums[m] <= target && target <= nums[r])
                    l = m + 1;
                else 
                    r = m - 1;
            }
        }
        return -1;
    }
};
