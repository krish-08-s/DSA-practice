class Solution {
public:
    int FirstOccurance(vector <int> &nums , int target)
    {
        int l = 0 , h = nums.size()-1;
        int res = -1;
        while( l <= h)
        {
            int mid = l + (h-l) / 2;
            if ( nums[mid] == target) // found the target but to find the first occurance we need to go to extreme left so that why can find first occurance
            {
                res = mid;
                h = mid -1;
            }
            else if( nums[mid] < target) l = mid + 1;
            else h = mid - 1;
        }
    return res;
    }

    int LastOccurance(vector <int> &nums , int target)
    {
        int l = 0 , h = nums.size()-1;
        int res = -1;
        while( l<= h)
        {
            int mid = l + (h-l) / 2;
            if ( nums[mid] == target) // we found the target but to find last occurance we need to go to extreme right 
            {
                res = mid;
                l = mid + 1;
            }
            else if( nums[mid] < target) l = mid + 1;
            else h = mid -1;
        }
        return res;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int first_oc = FirstOccurance(nums,target);
        int last_oc = LastOccurance(nums,target);
        vector <int> res(2,0);
        res[0] = first_oc;
        res[1] = last_oc;
        return res;
    }
};