class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int majEle = 0;
        int majFreq = n/2;
        unordered_map<int,int> freq;
        for(auto i : nums){
            freq[i]++;
        }
        for(auto it : freq){
            if(it.second > majFreq){
                majEle = it.first;
            }
        }
        return majEle;
    }
};