class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int j =0;
        for(int i =1; i<nums.size(); i++) // yeh toh chalta hi rahega, we need to make sure har ek iteration mein we get old element(j) replaced by a new one !!
        {
            if(nums[i] != nums[j])
            {
                j++;
                nums[j] = nums[i];
            }
        }
        return j+1;
    }
};