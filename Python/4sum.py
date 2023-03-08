# Problem:
# Given an array nums of n integers, return an array of all
# the unique quadruplets[nums[a], nums[b], nums[c], nums[d]] such that:
# 0 <= a, b, c, d <n
# a, b, c, and d are distinct.
#nums[a] + nums[b] + nums[c] + nums[d] == target
# You may return the answer in any order.

# Contraints:
# : the inputs of the array are all distinct

# Reductions:
# : Reduction - 1:
# : Return a quadruple set from a given list that equal the given target
# Ideas:
# :left or right based on distance from target
# :if distance positive, search high, if distance negative search low
from ast import List

# Reduction-1: Unfinished


class Reduction1:
    def getQuadruple(self, nums: List[int], target: int) -> List[List[int]]:
        quadruple = []
        sortedNums = sorted(nums)

        currentSum = 0

        for num in nums:
            distance = currentSum - target
            if distance >

        return 0


r1 = Reduction1()
