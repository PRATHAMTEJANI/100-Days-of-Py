num = int(input("enter a 2 digit number "))

map = {
    2: "abc",
    3: "def",
    4: "ghi",
    5: "jkl",
    6: "mno",
    7: "pqrs",
    8: "tuv",
    9: "wxyz"
}

d1 = num // 10;
d2 = num % 10;

s1 =  map.get(d1,"")
s2 =  map.get(d2,"")

for a in s1:
    for b in s2:
        print(a + b , end = " ")