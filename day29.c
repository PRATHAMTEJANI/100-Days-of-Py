class Solution(object):
    def convertToTitle(self, columnNumber):
        """
        :type columnNumber: int
        :rtype: str
        """
        result = ""

        while columnNumber > 0:
            columnNumber -= 1
            char = chr(columnNumber % 26 + ord('A'))
            result = char + result
            columnNumber //= 26

        return result