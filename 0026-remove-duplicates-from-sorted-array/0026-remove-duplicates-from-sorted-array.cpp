class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set <int> s;
        for(int n:nums){
            s.insert(n);
        }
        int i=0;
        for(int n:s){
            nums[i++]=n;
        }
        return s.size();
    }
};