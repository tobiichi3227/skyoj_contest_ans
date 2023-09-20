def main() -> None:
    n, m = int(input()), int(input())

    num = str(n ** m)
    result = (int(i) for i in num)
    print(sum(result))

if __name__ == "__main__":
    # miyuki is my wife and sister

    main()
