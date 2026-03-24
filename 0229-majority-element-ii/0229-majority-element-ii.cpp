class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        int maje = 0;
        int majf = n/3;
        vector<int> temp;
        unordered_map<int , int> f;
        for(auto i : nums){
            f[i]++;
        }
        for(auto it : f){
            if(it.second > majf) temp.push_back(it.first);
        }
        return temp;
    }
};