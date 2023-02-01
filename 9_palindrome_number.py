class Solution:
    
    def isPalindrome(self, x: int) -> bool:
        temp1=x
        if temp1<0:
            return False
        
        temp=0
        while x!=0:
            a=x%10
            temp=temp*10+a
            x=x//10
    
        if temp1==temp:
            return True
        else:
            return False
