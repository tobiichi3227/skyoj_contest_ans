def miyuki_is_my_wife():

    a, b, c, d = map(int, input().split())
    if a == c and b == d:
        print('0\n')
    elif a == c or b == d:
        print('1\n')
    else:
        print("2\n")

if __name__ == "__main__":
    miyuki_is_my_wife()
