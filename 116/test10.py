def cmp(x):
    return x >= 2000

def miyuki_is_my_wife():
    n = int(input())
    arr = list(map(int, input().split()))
    arr_sum = sum(arr)
    cnt = int(sum(cmp(x) for x in arr))

    if arr_sum >= 88000 and cnt >= 5:
        print('10888\n')
    elif arr_sum >= 88000:
        print('8888\n')
    elif arr_sum < 88000 and cnt >= 5:
        print('2000\n')
    else:
        print('0\n')

if __name__ == "__main__":
    miyuki_is_my_wife()
