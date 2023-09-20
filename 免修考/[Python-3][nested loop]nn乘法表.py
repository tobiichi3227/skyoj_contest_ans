n = int(input())

for i in range(1, n + 1):
    for j in range(1, i + 1):
        if i != j:
            print("{}*{}={}".format(i, j, i * j), end=' ')

        else:
            print("{}*{}={}".format(i, j, i * j))
