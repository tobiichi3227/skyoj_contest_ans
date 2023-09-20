def main():
    a, b = map(int, input().split())

    res = ""
    if a > b:
        res = ">"
    elif a < b:
        res = "<"
    else:
        res = "="

    print(res)

if __name__ == '__main__':
    # miyuki is my wife and sister 深雪わ私の妻です
    main()
