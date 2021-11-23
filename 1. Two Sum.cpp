class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    vector<int>results;    
    int sz = nums.size();        
    for(int i=0;i<sz;i++)
    {
        for(int j=i+1;j<sz;j++)
        {
            if(nums[i]+nums[j]==target)
            {
                results.push_back(i);
                results.push_back(j);
                break;
            }
        }
    }
    return results;
    }
        
};
