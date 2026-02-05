class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int count = 0; // first element is always unique
        for(int i = 1 ; i < nums.size() ; i++) // loop from next element 
        {
            if(nums[count] != nums[i] ) // check that is next and previous element are same or not

            {
                count++;  // move to index where it should be placed
                nums[count] = nums[i];
            }
        }
        return count+1;
    }
};