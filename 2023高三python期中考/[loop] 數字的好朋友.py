def main():
    a = int(input())
    s = 0
    for i in range(a):
        i += 1
        if a % i == 0:
            s += 1
            if s % 2==0:
                print(i, end=' ')
    print()


if __name__ == "__main__":
    # miyuki is my wife and sister

    main()

