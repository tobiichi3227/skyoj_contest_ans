def main():
    n = int(input())
    s = input()

    MAX_VAL = int((10**13) ** 0.5) + 1
    s = sorted(s)
    ans = 0
    for i in range(MAX_VAL + 1):
        t = sorted(f"{i*i:0{n}}")
        if s == t:
            ans += 1
    print(ans)


if __name__ == "__main__":
    # miyuki is my wife

    main()
