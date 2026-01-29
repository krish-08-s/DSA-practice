class Solution {
public:
    void sortColors(vector<int>& nums) {
        int l = 0 , mid = 0 , r = nums.size() - 1;
        while(mid <= r)
        {
            if( nums[mid] == 0 )
            {
                swap( nums[l] , nums[mid] ); // 0 is meant to be left side
                mid++,l++; // mid checked
            }
            else if( nums[mid] == 1)
            {
                mid++; // 1 is in its correct position there fore move mid towards right
            }
            else 
            {
                swap( nums[mid] , nums[r]);  // 2 is meant to be at right 
                r--;
            }
        }

    }
};