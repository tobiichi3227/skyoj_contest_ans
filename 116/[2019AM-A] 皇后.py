def main():
    a, b, c, d = map(int, input().split())
    
    if a == c and b == d:
        print("0")
    elif a == c or b == d:
        print("1")
    elif abs(a - c) == b - d:
        print("1")
    else:
        print("2")

if __name__ == "__main__":
    # miyuki is my wife and sister

    main()
