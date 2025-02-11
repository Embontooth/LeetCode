class Solution(object):
    def losingPlayer(self, x, y):
        ctr=0
        while x>=1 and y>=4:
            x=x-1
            y=y-4
            ctr+=1
            
        if ctr%2==0:
            return("Bob")
        else:
            return("Alice")