class Solution(object):
    def lengthOfLongestSubstring(self,param_1):
        window = set()
        left = 0
        max_length = 0
        for right in range(len(param_1)):
          while param_1[right] in window:
            window.remove(param_1[left])
            left +=1
          window.add(param_1[right])
          max_length=max(max_length,right-left+1)
        return max_length
