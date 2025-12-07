import random 
freind = ["pratham" , "jeerry" , "hanu" , "shivu" , "chankya"]
freind1 = ["terjani" , "tom" , "man" , "nath" , "niti"]
#choice 1
# print(random.choice(freind))

#choice 2
# random_index = random.randint(0,4)
# print(freind[random_index])

# print(len(freind))
# print(freind[1])

# print(freind[122])  #IndexError: list index out of range

var = [freind , freind1]
print(var)

var1 = ['''    _______
---'  ____ )
      (____)
      (____)
      (___)
''' , '''     _______
---'    ____)____
           ______)
          _______)
         _______)''' , '''    _______
---'  ____)____
       ______)
      (____)
      (___)'''] 
print(random.choice(var1))

a = '''    _______
---'  ____ )
      (____)
      (____)
      (___)'''

b = '''     _______
---'    ____)____
           ______)
          _______)
         _______)'''

c = '''    _______
---'  ____)____
       ______)
      (____)
      (___)'''
var4 = input("enter a number for roch paper seassor")
if var4 == 1:
    print(a)
elif var4 == 2:
    print(b)
else:
    print(c)
    

print(var4)

print("game is strating noe |||")

if(random.choice(var1) == a):
    print("you are Win!")
elif(random.choice(var1) == b):
    print("you are win!!")
elif(random.choice(var1) == c):
    print("you are win!")
else:
    print("please go HOME")









