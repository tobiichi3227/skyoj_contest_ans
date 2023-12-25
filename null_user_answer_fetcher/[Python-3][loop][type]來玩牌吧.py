n, m = map(int, input().split())
a = []
b = []
for i in range(n):
    a.append(set(map(int, input().split())))
    b.append(set(map(int, input().split())))
[print(len(a[i] & b[i])) for i in range(n)]
