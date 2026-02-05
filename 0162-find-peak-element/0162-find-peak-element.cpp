class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int low = 0 , high = nums.size() - 1;
        while( low < high )
        {
            int mid = low + ( high - low) / 2;
            if ( nums[mid] < nums[mid + 1]) // that is we are going up hill -> that is peak element is in the right side.
                low = mid + 1;
            else 
                high = mid;
        } 
        return low;
    }
};