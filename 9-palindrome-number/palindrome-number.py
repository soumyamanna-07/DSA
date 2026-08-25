class Solution(object):
    def isPalindrome(self, x):
        if x<0:
            return False
        else:
            org = x
            sum =0 
            while x>0:
                r= x%10
                sum=sum*10+r
                x/=10
            if org == sum:
                return True
        return False 
        """
        :type x: int
        :rtype: bool
        """
        