class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_map<int,int> freq;
        for(int element:nums){
            freq[element]++;
        }
        vector<int> temp;
        for(auto p:freq){
            if(p.second==2){
                temp.push_back(p.first);
            }
        }
        return temp;
    }
};