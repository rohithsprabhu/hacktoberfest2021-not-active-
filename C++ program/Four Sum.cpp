/* Given an array nums of n integers, return an array of all the unique quadruplets [nums[a], nums[b], nums[c], nums[d]] such that:
0 <= a, b, c, d < n
a, b, c, and d are distinct.
nums[a] + nums[b] + nums[c] + nums[d] == target
You may return the answer in any order. */

//CODE

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> res;
        if(nums.empty()) return res;
        
        int n = nums.size();
        sort(nums.begin(), nums.end()); // sort the given vector
        
        for(int i = 0; i < n; i ++){
            for(int j = i + 1; j < n; j++){
                int remainingTarget = target - nums[j] - nums[i];    //find the remaing target from num[i], num[j] and given target
                
                int left = j + 1;   //left at next of j
                int right = n - 1; //right at last index
                
                while(left < right){    //until left and right do not cross
                    int twoSum = nums[left] + nums[right];
                    if(twoSum < remainingTarget)    //if the remaining target is lesser then we move to next indexes with greater value as its already sorted
                        left++;
                    else if(twoSum > remainingTarget)
                        right--;
                    
                    //setting the quadrant
                    else{
                        vector<int> quads(4,0);
                        quads[0]= nums[i];
                        quads[1]= nums[j];
                        quads[2]= nums[left];
                        quads[3]= nums[right];
                        res.push_back(quads);
                        
                        //processing the duplicates of number 3
                        while(left < right && nums[left] == quads[2])
                            ++left;
                        
                        //processing the duplicates of number 4
                        while(left < right && nums[right] == quads[3])
                            --right;
                    }
                }
                while(j+1 < n && nums[j+1] == nums[j])
                    ++j;            //processing the duplicates of number 2
                
                while(i+1 < n && nums[i+1] == nums[i])
                    ++i;        //processing the duplicates of number 1
            }
        }
        return res;
        
    }
};
