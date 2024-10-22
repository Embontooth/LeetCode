class Solution(object):
    def findTheWinner(self, n, k):
        l=[]
        c=0
        l=list(range(1,n+1))
        while n>1:
            for i in range(c,c+k):
                if i==(c+k)-1:
                    while i+1>n:
                        i=abs(i-n)
                    a=l.pop(i)
                    c=i
                    n=n-1
        return (l[0])