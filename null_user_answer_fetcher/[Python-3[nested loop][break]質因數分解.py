n = int(input())
ro = int(n**0.5 + 0.5)
# print(ro)
inv = []
for i in range(2, 1000000):
    if n <= 1:
        break
    while n % i == 0:
        inv.append(i)
        n = n // i
        # print(n)
for i in range(len(inv) - 1):
    print(inv[i], end="*")
print(inv[len(inv) - 1], end="")
if n > 1:
    print("*", n, sep="")
else:
    print("")
