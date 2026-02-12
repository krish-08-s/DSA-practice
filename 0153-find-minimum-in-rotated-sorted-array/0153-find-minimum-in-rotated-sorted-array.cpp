class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int low = 0 , high = n - 1;
        int ans = INT_MAX;
        while( low <= high ) {
            // find mid
            int mid = low + ( high - low ) / 2;
            // checking if we are in the left sorted part 
            if( nums[low] <= nums[mid]) {
                // min will always be low in left sorted part
                ans = min(nums[low],ans);
                // now go to right part and check for min element
                low = mid + 1;
            }
            // we are in right sorted part
            else {
                // compare ans and mid
                ans = min(nums[mid],ans);
                // got min in right sorted part go to left sorted part
                high = mid - 1;
            }
        }
        return ans;

    }
};