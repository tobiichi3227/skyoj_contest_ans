n = int(input())
a = int(input())
m = a
sum = 0
for i in range(n):
    sum = sum + a
    a = a * 10 + m
print(sum)
