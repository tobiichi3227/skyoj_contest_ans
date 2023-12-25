# 完全數
m = int(input())
n = int(input())
area = 0
if n > m:
    m, n = n, m
for i in range(n, m + 1):
    sum = 0
    for j in range(1, i // 2 + 1):
        if i % j == 0:
            sum = sum + j
    if sum == i:
        area = 1
        print(i, end=" ")
if area == 0:
    print("GG")
