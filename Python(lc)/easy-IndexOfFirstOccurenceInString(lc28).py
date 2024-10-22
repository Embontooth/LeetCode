class Solution(object):
    def strStr(self, haystack, needle):
        # l = list(haystack)
        for i in range(len(haystack)):
            if(needle[0]==haystack[i]):
                if(len(haystack)-i-len(needle)>=0):
                    for j in range(len(needle)):
                        if(haystack[i+j]==needle[j]):
                            if(j==len(needle)-1):
                                return i
                        else:
                            break
        return -1