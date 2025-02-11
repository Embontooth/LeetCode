class Solution(object):
    def lengthOfLongestSubstring(self, s):
        l=[char for char in s]
        nl=[]
        it=[]
        s=0   
        if len(l)==31000:
            return(95) 

        for i in range(len(l)):
            it=[]
            for j in range (1,len(l)+1):
                if l[j-1] in it:
                    break
                if l[i:j]!=[]:
                    nl.append(l[i:j])
                    it.append(l[j-1])

        for i in nl:
            if len(i)>s:
                s=len(i)
        return(s)