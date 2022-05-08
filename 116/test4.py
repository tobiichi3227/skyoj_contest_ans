def miyuki_is_my_wife():
    a, b = map(int, input().split())
    if a < b or a < 0 or b < 0 or a > 100 or b > 100:
        print('impossible\n')
        exit()
    if a % 2 == 0 and b % 2 == 1:
        print('impossible\n')
        exit()
    if a % 2 == 1 and b % 2 == 0:
        print('impossible\n')
        exit()
    c = (a + b) / 2
    d = a - c
    if c < 0 or d < 0 or c > 100 or d > 100:
        print('impossible\n')
    elif c < d:
        c, d = d, c

    print(c, ' ', d, '\n')


if __name__ == "__main__":
    miyuki_is_my_wife()
