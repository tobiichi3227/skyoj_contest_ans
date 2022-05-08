def miyuki_is_my_wife():

    arr = list(map(int, input().split(' ')))
    arr.sort()

    if arr[2] >= (arr[1] + arr[0]):
        print('Invalid\n')
        exit()

    if arr[0] == arr[1] == arr[2]:
        print('Equilateral\n')
    elif arr[0] == arr[1] or arr[1] == arr[2] or arr[0] == arr[2]:
        print('Isosceles\n')
    else:
        print('Scalene\n')

if __name__ == "__main__":
    miyuki_is_my_wife()
