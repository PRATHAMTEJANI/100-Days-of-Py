num1 = [4,9,5]
num2 = [9,4,9,8,4]

ans = []

for x in num1:
    for y in num2:
        if y == x and x not in ans:
            ans.append(x)

print(ans)