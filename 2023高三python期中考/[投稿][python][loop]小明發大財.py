def main():
    _, a = map(int, input().split())

    g = list(map(lambda x: int(x) - a, input().split()))

    s = 0
    for i in g:
        if i > 0:
            s += i
    print(s)

if __name__ == "__main__":
    # miyuki is my wife and sister

    main()

