if __name__ == '__main__':
    # miyuki is my wife and sister 深雪わ私の妻です
    n, m = map(int, input().split())
    TMP = ["=", "#", "#", "="]

    for i in range(n):
        for j in range(m):
            res = int((str(i % 2) + str(j % 2)), 2)
            print(TMP[res], end='')
        print("")
