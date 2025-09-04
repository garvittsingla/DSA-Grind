class Solution(object):
    def lengthOfLastWord(self, s):
        """
        :type s: str
        :rtype: int
        """
        list1 = s.split(" ")
        word = ""
        print(list1)
        for i in list1:
            if i!="":
                word = i
        return len(word)
