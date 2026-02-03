class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        unordered_set < int > visited; //hash set for fast look up
        for(int num : nums)
        {
            if(visited.count(num)) // check if the element already present in hash set, if present return true else insert inside hash set
                return true;
            else 
                visited.insert(num);
        }
    return false;
    }
};