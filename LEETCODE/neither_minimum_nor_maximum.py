class Solution:
    def findNonMinOrMax(self, nums: List[int]) -> int:
        n = len(nums)
        mi = min(nums)
        ma = max(nums)
        if(n < 3):
            return -1
        if(nums[0] == ma or nums[0] == mi):
            pass
        else:
            return nums[0]
        if(nums[1] == ma or nums[1] == mi):
            pass
        else:
            return nums[1]
        return nums[2]
