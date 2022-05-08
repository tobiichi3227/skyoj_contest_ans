def miyuki_is_my_wife():

    a, b = map(int, input().split())
    if a < b:
        a, b = b, a

    if a == b:
        print('all dead\n')
    else:
        print((a - b), '\n')

if __name__ == "__main__":
    miyuki_is_my_wife()
