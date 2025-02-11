class Solution(object):
    def twoSum(self, nums, target):
        ind=[]
        for i in nums:
            s=nums.index(i)
            if len(ind)==2:
                break
            else:
                for j in range(s+1,len(nums)):
                    if i+nums[j]==target:
                        ind.append(s)
                        ind.append(j)
        return ind