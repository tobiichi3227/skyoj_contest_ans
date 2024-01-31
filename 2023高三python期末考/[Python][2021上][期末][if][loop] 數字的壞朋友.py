def main():
    a = int(input())
    k = 0
    for i in range(1, a + 1):
        if a % i == 0:
            k = k + 1
        if k % 2 == 1 and a % i == 0:
            print(i, end=" ")
    print()


if __name__ == "__main__":
    # miyuki is my wife and sister

    main()
