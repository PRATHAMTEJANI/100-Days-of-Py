import itertools
class Solution(object):
    def permute(self, nums):
        """
        :type nums: List[int]
        :rtype: List[List[int]]
        """
        perms = itertools.permutations(nums)

        return [list(i) for i in perms]