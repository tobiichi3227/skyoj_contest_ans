def main():
    arr = list(map(int, input().split()))

    arr.sort()
    a, b, c = arr[0], arr[1], arr[2]

    res = ""
    if abs(a - b) <= c and c <= (a + b):
        if a == b == c:
            res = "Equilateral"
        elif a == b or a == c or b == c:
            res = "Isosceles"
        else:
            res = "Scalene"

    else:
        res = "Invalid"

    print(res)

if __name__ == '__main__':
    # miyuki is my wife and sister 深雪わ私の妻です
    main()
