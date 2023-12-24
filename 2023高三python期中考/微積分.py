n = int(input())
q = int(input())
c = list(map(float, input().split()))
x = float(input())
ans = 0

while q > 0 and n >= 0:
    for i in range(n):
        c[i] *= (n - i)
    del c[-1]

    q -= 1
    n -= 1

for i in range(len(c)):
    ans += c[i] * (x ** (len(c) - i - 1))
print(f'function value: {ans:.4f}')
