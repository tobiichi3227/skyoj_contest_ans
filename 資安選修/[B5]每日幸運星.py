def main():
    a, b = map(str, input().split())
    PRICE = ["Shit happens", "Shit happens", "Shit happens", "Shit happens", "Shit happens", 200, 400, 2000, 20000, 200000, 2000000]

    zipped = zip(a, b)

    cnt = 0
    for i in zipped:
        ff, ss = i
        if ff == ss:
            cnt += 1
        else:
            break

    print(PRICE[cnt])

if __name__ == '__main__':
    # miyuki is my wife and sister 深雪わ私の妻です
    main()
