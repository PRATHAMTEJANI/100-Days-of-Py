class Solution(object):
    def Binaryadd(self,a,b):
        num1 = int(a,2)
        num2 = int(b,2)

        add = num1 + num2
        binary = bin(add)[2:]

        return binary

obj = Solution()
print(obj.Binaryadd("1010","1011"))

# leetccode
class Solution(object):
    def addBinary(self,a,b):
        num1 = int(a,2)
        num2 = int(b,2)

        add = num1 + num2
        binary = bin(add)[2:]

        return binary

