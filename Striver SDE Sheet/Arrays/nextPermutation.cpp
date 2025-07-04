class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int index = -1;
        for(int i = nums.size() - 2; i>=0; i--)
        {
            if(nums[i] < nums[i+1])
            {
                index = i;
                break;
            }
        }

        if(index == -1)
        {
            reverse(nums.begin(), nums.end());
            return; // I forgot this return : )
        }

        for(int i = nums.size() - 1; i>index; i--)
        {
            if(nums[index] < nums[i])
            {
                swap(nums[index], nums[i]);
                break;
            }
        }

        reverse(nums.begin() + 1 + index, nums.end());
    }
};