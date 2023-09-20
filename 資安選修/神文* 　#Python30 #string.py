def main() -> None:
    n = int(input())

    for _ in range(n):
        text = input()

        if text == text[::-1]:
            print('YES')

        else:
            print('NO')

if __name__ == "__main__":
    # miyuki is my wife and sister

    main()


