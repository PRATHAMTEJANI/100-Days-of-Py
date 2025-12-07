import random

# for x in range(1,10):
#     print(x)

fruit = ["apple" , "banana" , "cherry"]
for x in fruit:
    print(random.choice(fruit))

student = [1,2,3,4,5,6,7,3,4,5,11,2,3,4,56,56,5,1,525,6,56,546,56,345,6,62,62,626,62,6]
print(student)
max = student[0]

for x in student:
    
    if x > max:

        max = x
        print("largest among them alllthis all marks " , x)
    else:
        print("gharbhegino thane")