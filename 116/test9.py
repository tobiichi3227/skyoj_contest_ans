def miyuki_is_my_wife():
    m, n, k = map(int, input().split())
    n = n - 1
    arr = list(map(int, input().split()))
    i = 0
    flag = True
    if m == 1:
        while i < n:
            if not arr[i] < arr[i + 1]:
                print('0\n')
                flag = False
                break
    elif m == 2:
        while i < n:
            if not arr[i] > arr[i + 1]:
                print('0\n')
                flag = False
                break
    else:
        while i < n:
            if not arr[i] == arr[i + 1]:
                print('0\n')
                flag = False
                break

    if flag:
        print('1\n')

    is_all_devide = True
    for i in arr:
        if not i % k == 0:
            is_all_devide = False
            break

    if is_all_devide:
        print('Oh, win10 I love you.\n')
    else:
        print('Please, I want to meet win10.\n')

if __name__ == "__main__":
    miyuki_is_my_wife()
