import math

def main():
    a = list(map(int, input().split()))
    a.sort(reverse=True)

    s = sum(a) / len(a)
    m = 0
    t = 0
    for i in a:
        m += (i-s)**2

    m = math.sqrt(m / len(a))

    for i in a:
        t = (i - s) / m
        print(f'{i}: {t:.2f}')

if __name__ == "__main__":
    # miyuki is my wife and sister

    main()

