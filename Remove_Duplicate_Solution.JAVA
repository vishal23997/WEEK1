class Solution {
    public int removeDuplicates(int[] nums) {
    if(nums.length==0)
        return 0;
    int temp=nums[0],count=1;
    for(int i=1;i<nums.length;i++)
    {
        if(nums[i]!=temp)
        {
            temp=nums[i];
            nums[count]=nums[i];
            count++;
        }
    }
    return count;
    }
}
