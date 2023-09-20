def main():
    tc = int(input())
    for _ in range(tc):
        arr = list(map(int, input().split()))
        n = arr.pop(0)
        arr.sort(reverse=True)
        sum_ = 0
        for i in range(2, n, 3):
            sum_ += arr[i]
        print(sum_)

if __name__ == '__main__':
    # miyuki is my wife and sister 深雪わ私の妻です
    main()
