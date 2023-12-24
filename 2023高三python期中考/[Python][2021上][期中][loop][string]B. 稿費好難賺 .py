def main():
    a = input().lower()
    cnt = 0

    for ch in a:
        if ch.isalpha():
            cnt += 1
        elif ch.isdigit():
            cnt += 0.8
        elif ch == ' ':
            cnt += 0.1
        else:
            cnt += 0.5

    print(f"{cnt:.2f}")

if __name__ == "__main__":
    # miyuki is my wife and sister

    main()
