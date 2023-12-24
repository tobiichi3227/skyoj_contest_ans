def main():
    words = input().lower()

    s = 0
    for ch in words:
        if not ch.isalpha():
            print("Fail")
            return

        s += ord(ch) - 96

    print(s)

if __name__ == "__main__":
    # miyuki is my wife and sister

    main()

