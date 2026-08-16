class Solution(object):
    def runningSum(self, nums):
        ans = [nums[0]]
    
        for i in range(1,len(nums)):
            ans.append(ans[i-1] + nums[i])
        return ans
        
        