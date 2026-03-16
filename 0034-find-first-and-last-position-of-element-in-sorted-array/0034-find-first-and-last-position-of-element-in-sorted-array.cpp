class Solution {
public:
    int first(vector<int>& nums, int target) {
        int n = nums.size();
        int low = 0 , high = n - 1;
        int ans = -1;
        while( low <= high ) {
            int mid =  low + (high-low) / 2;
            if(nums[mid]==target){
                ans=mid;
                high = mid-1;
            }
            else if(target<nums[mid]){
                high = mid-1;
            }
            else 
                low=mid+1;
        }
        return ans;
    }

    int last(vector<int>& nums, int target) {
        int n = nums.size();
        int low = 0 , high = n - 1;
        int ans = -1;
        while( low <= high ) {
            int mid = low + (high - low) / 2;
            if(nums[mid]==target){
                ans=mid;
                low=mid+1;
            }
            else if(target<nums[mid])
                high=mid-1;
            else 
                low=mid+1;
        }
        return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int first_oc = first(nums,target);
        int last_oc = last(nums,target);
        vector <int> res(2,0);
        res[0] = first_oc;
        res[1] = last_oc;
        return res;
    }
};