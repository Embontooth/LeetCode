class Solution(object):
    def sortPeople(self, names, heights):
        dicti={}
        final=[]
        for i in range(len(names)):
            dicti[heights[i]]=names[i]
            
        heights.sort(reverse=True)
        for i in heights:
            final.append(dicti[i])
        return final