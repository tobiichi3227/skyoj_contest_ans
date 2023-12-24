def main():
    a, b, c = list(map(int, input().split()))

    if a > b > 2 * c or c > b > 2 * a:
        print("B")
    elif c > a > 2 * b or b > a > 2 * c:
        print("A")
    elif b > c > 2 * a or a > c > 2 * b:
        print("C")
    else:
        res = min(a, b, c)
        if res == a:
            print("A")
        elif res == b:
            print("B")
        else:
            print("C")

if __name__ == "__main__":
    # miyuki is my wife and sister

    main()

