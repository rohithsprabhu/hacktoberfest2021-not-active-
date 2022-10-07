/*

152. Maximum Product Subarray
https://leetcode.com/problems/maximum-product-subarray/

*/
class Solution {
    public int maxProduct(int[] nums) {
        
        int i;
        int currp=1;
        int ans= Integer.MIN_VALUE;
        for(i=0; i<nums.length; i++)
        {
            currp*=nums[i];
            ans=Math.max(ans, currp);
            if(currp==0)
                currp=1;
        }
        currp=1;
        for(i=nums.length-1; i>=0; i--)
        {
            currp*=nums[i];
            ans=Math.max(ans, currp);
            if(currp==0)
                currp=1;
        }
        return ans;
    }
}
