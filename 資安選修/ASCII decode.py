def main() -> None:
    ascii_list = list(map(int, input().split()))

    ascii_to_word = (chr(i) for i in ascii_list)
    for i in ascii_to_word:
        print(i, end='')
    print('')

if __name__ == "__main__":
    # miyuki is my wife and sister

    main()
