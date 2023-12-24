# no ac
a = int(input())
b = int(input())
c = list(map(int, input().split()))
d = int(input())
cp = []
x = 0
for i in range(b):
    k = a - i
    for j in range(k):
        cp.append(c[j]*(k-j))
    c = cp
    cp = []
k = a - b
for i in range(len(c)):
    x = x + c[i]*(d**k)
    k = k - 1
print('function value: {0:.4f}'.format(x))
