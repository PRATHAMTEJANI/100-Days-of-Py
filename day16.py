arr = [1,2,3,9]
num = int("".join(map(str, arr)))

print(num + 1)

fin = list(map(int, str(num + 1)))
print(fin)