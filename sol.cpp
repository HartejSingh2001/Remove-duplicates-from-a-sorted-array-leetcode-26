class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size(),i=0,j=1;
        for(j=1;j<n;j++)
        {
            if(nums[i]!=nums[j])
            {
                i++;
                nums[i]=nums[j];
            }
            
        }
        return i+1;
        
    }
};
