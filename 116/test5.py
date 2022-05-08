def get_sum(a : int, b : int):
    if b > a:
        return (a + 40 - b) * 9
    return (a - b) * 9

def miyuki_is_my_wife():

    a, b, c, d = map(int, input().split())
    sum = 1080
    sum = sum + get_sum(a, b)
    sum = sum + get_sum(c, b)
    sum = sum + get_sum(d, c)
    print(sum, '\n')

if __name__ == "__main__":
    miyuki_is_my_wife()
