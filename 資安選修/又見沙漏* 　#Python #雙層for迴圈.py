def main() -> None:
    n = int(input())

    # revert
    for i in range(n):
        print(' ' * i, end='')
        print('@' * (2 * (n - i) - 1), end='')
        print('')

    # origin
    for i in range(n):
        print(' ' * (n - i - 1), end='')
        print('@' * (2 * i + 1), end='')
        print('')

if __name__ == "__main__":
    # miyuki is my wife and sister

    main()
