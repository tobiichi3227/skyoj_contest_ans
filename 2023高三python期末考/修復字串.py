def main():
    n, t = input().split()
    s = [input() for _ in range(int(n))]
    ans = 0
    l = []
    for i in range(int(n)):
        if abs(len(t) - len(s[i])) <= 1:
            for j in range(min(len(s[i]), len(t))):
                if s[i][j] != t[j]:
                    if (
                        s[i][j:] == t[j + 1 :]
                        or s[i][j + 1 :] == t[j:]
                        or s[i][j + 1 :] == t[j + 1 :]
                    ):
                        ans += 1
                        l.append(i + 1)
                    break
            else:
                ans += 1
                l.append(i + 1)
    print(ans)
    print(*l)


if __name__ == "__main__":
    # miyuki is my wife

    main()
