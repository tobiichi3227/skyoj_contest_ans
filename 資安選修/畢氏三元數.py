import math

def main():
    n = int(input())

    n_2 = n * n

    for i in range(3, n + 1):
        for j in range(i + 1, n + 1):
            if i * i + j * j <= n_2:
                c = math.sqrt(i * i + j * j)
                if c == int(c):
                    print(i, j, int(c))
            else:
                break

if __name__ == '__main__':
    main()
