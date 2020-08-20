// Given an array nums, write a function to move all 0's to the end of it while maintaining the relative order of the non-zero elements.

// Example:

// Input: [0,1,0,3,12]
// Output: [1,3,12,0,0]

// CODE:-

class Solve{
    public:
    void moveZeroes(vector<int>& nums)
    {
        // m is the index where last non zero element occured
        int n=nums.size(),m=0;
        for(int i=0; i<n; i++)
        {
            if(nums[i]!=0)
              nums[m++]=nums[i];
        }
        for(int i=m;i<n;i++)
        {
            nums[i]=0;
        }
    }
}