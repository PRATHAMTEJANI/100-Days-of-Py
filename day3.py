import random
import string
total = 0
for i in range(1,20 , 5):
    total = total + i
print(total)

Numbers =  ['0', '1', '2', '3', '4', '5', '6', '7', '8', '9']
Letters =  [   'a','b','c','d','e','f','g','h','i','j',
    'k','l','m','n','o','p','q','r','s','t',
    'u','v','w','x','y','z']
Symbols =  ['!', '"', '#', '$', '%', '&', "'", '(', ')', '*', '+', ',', '-', '.', '/', ...]

print("welcome to generate passwod")
letter = int(input("enter latters you want"))
symbol = int(input("enter symbol you want"))
number = int(input("enter number you want"))

# a = random.randint(1,number)
# b = random.choice(string.ascii_lowercase)
# c = random.choice(string.punctuation)

# print(a , b , c)

password = ""
for char in range(0,letter):
    var1 = random.choice(Letters)
    password += var1

for sym in range(0, symbol):
    var2 = random.choice(Symbols)
    password += var2

for num in range(0,number ):
    var3 = random.choice(Numbers)
    password += var3

print(password)
