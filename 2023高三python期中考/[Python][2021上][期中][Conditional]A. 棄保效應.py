def main():
    a, b, c = map(int, input().split())

    if a > b and a > c:
        if a < b + c:
            if b > c:
                print("B")
            else:
                print("C")
        else:
            print("A")
    if b > a and b > c:
        if b < a + c:
            if a > c:
                print("A")
            else:
                print("C")
        else:
            print("B")
    if c>b and c>a:
        if c<(b+a):
            if b>a:
                print("B")
            else:
                print("A")
        else:
            print("C")


if __name__ == "__main__":
    # miyuki is my wife and sister

    main()

