a = int(input())
v = ["10000", "01000", "00100", "00010", "00001"]
v = {
    "10000": 0,
    "01000": 1,
    "00100": 2,
    "00010": 3,
    "00001": 4,
}
d = [0, 0, 0, 0, 0, 0]
for _ in range(a):
    i = input()
    if i not in v:
        d[5] += 1
    else:
        d[v[i]] += 1

for j in range(1, len(d)):
    print("#{0}: {1}".format(j, d[j - 1]))

print("#{0}: {1}".format("NA", d[5]))
