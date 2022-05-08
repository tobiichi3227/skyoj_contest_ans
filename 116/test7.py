def miyuki_is_my_wife():

    a, b, c, d = map(int, input().split())
    tmp = (c - a) * 60 + d - b

    if c < a:
        print(((24 - a + c) * 60 + d - b), '\n')
    elif tmp < 0:
        print((1440 + tmp), '\n')
    else:
        print(tmp, '\n')

if __name__ == "__main__":
    miyuki_is_my_wife()
