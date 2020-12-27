# https://leetcode.com/problems/two-sum/
class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        if not nums:
            return []
        for index, arg in enumerate(nums):
            for jindex, jarg in enumerate(nums):
                if index == jindex: continue
                if jarg + arg == target: return [index, jindex]
        return []
        