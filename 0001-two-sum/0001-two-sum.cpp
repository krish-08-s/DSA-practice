class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int,int>> ar;
        for(int i = 0 ; i < nums.size() ; i++){
            ar.push_back({nums[i] , i}); // {value , index}
        }
        sort(ar.begin() , ar.end());
        int l = 0 , r = nums.size() - 1;
        while( l<r ) {
            int sum = ar[l].first + ar[r].first;

            if(sum == target)
                return { ar[l].second , ar[r].second};
            else if( sum < target) 
                l++;
            else 
                r--;
        }
        return{};
    }
};