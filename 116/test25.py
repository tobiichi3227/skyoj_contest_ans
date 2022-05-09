def miyuki_is_my_wife():
    n = int(input())
    arr = list(map(int, input().split()))
    arr.sort()
    print(arr[n - 2], '\n')

if __name__ == "__main__":
    miyuki_is_my_wife()
